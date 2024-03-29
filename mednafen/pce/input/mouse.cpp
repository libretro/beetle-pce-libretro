/* Mednafen - Multi-system Emulator
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "../pce.h"
#include "../input.h"
#include "mouse.h"

class PCE_Input_Mouse : public PCE_Input_Device
{
public:
	PCE_Input_Mouse();
	virtual void Power(int32 timestamp);

	virtual void AdjustTS(int32 delta);
	virtual void Write(int32 timestamp, bool old_SEL, bool new_SEL, bool old_CLR, bool new_CLR);
	virtual uint8 Read(int32 timestamp);
	virtual void Update(const uint8 *data, bool start_frame);
	virtual int StateAction(StateMem *sm, int load, int data_only, const char *section_name);

private:
	bool SEL, CLR;
	int64 mouse_last_meow;

	int32 mouse_x, mouse_y;
	uint8 pce_mouse_button;
	uint8 mouse_index;

	uint16 mouse_shifter;
};

void PCE_Input_Mouse::Power(int32 timestamp)
{
	SEL = CLR = 0;
	mouse_last_meow = 0;
	mouse_x = mouse_y = 0;
	pce_mouse_button = 0;
	mouse_index = 0;
	mouse_shifter = 0;
}

PCE_Input_Mouse::PCE_Input_Mouse()
{
	Power(0);
}

void PCE_Input_Mouse::Update(const uint8 *data, bool start_frame)
{
	if(!start_frame)
		return;

	mouse_x          += (int16)MDFN_de16lsb(data + 0);
	mouse_y          += (int16)MDFN_de16lsb(data + 2);
	pce_mouse_button  = *(data + 4);
}

void PCE_Input_Mouse::AdjustTS(int32 delta)
{
	mouse_last_meow += delta;
}

void PCE_Input_Mouse::Write(int32 timestamp, bool old_SEL, bool new_SEL, bool old_CLR, bool new_CLR)
{
	if(!old_CLR && new_CLR)
	{
		if(((int64)timestamp - mouse_last_meow) > 10000 * 3)
		{
			mouse_last_meow = timestamp;

			int32 rel_x = (int32)((0-mouse_x));
			int32 rel_y = (int32)((0-mouse_y));

			if(rel_x < -127) rel_x = -127;
			if(rel_x > 127) rel_x = 127;
			if(rel_y < -127) rel_y = -127;
			if(rel_y > 127) rel_y = 127;

			mouse_shifter = ((rel_x & 0xF0) >> 4) | ((rel_x & 0x0F) << 4);
			mouse_shifter |= (((rel_y & 0xF0) >> 4) | ((rel_y & 0x0F) << 4)) << 8;

			mouse_x += (int32)(rel_x);
			mouse_y += (int32)(rel_y);

		}
		else
			mouse_shifter >>= 4;
	}

	SEL = new_SEL;
	CLR = new_CLR;
}

uint8 PCE_Input_Mouse::Read(int32 timestamp)
{
	uint8 ret = 0xF;
	if(SEL)
		  return (mouse_shifter & 0xF);
	ret ^= pce_mouse_button & 0xF;
	return(ret);
}

int PCE_Input_Mouse::StateAction(StateMem *sm, int load, int data_only, const char *section_name)
{
	SFORMAT StateRegs[] =
	{
		SFVAR(SEL),
		SFVAR(CLR),
		SFVAR(mouse_last_meow),
		SFVAR(mouse_x),
		SFVAR(mouse_y),
		SFVAR(pce_mouse_button),
		SFVAR(mouse_index),
		SFVAR(mouse_shifter),

		SFEND
	};
	int ret = MDFNSS_StateAction(sm, load, data_only, StateRegs, section_name, false);
 
	return(ret);
}

PCE_Input_Device *PCEINPUT_MakeMouse(void)
{
	return(new PCE_Input_Mouse());
}
