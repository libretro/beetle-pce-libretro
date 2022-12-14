#ifndef _MEDNAFEN_H
#define _MEDNAFEN_H

#include "mednafen-types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _(String) (String)

#include "math_ops.h"
#include "git.h"

#ifdef _WIN32
#define strcasecmp _stricmp
#endif

template <typename T> 
static INLINE T min_T(T x, T y) 
{ 
	return (x < y) ? x : y; 
}

template <typename T> 
static INLINE T max_T(T x, T y) 
{ 
	return (x > y) ? x : y; 
}

template<typename T>
static INLINE void swap_T(T& t1, T& t2)
{
	T tmp(t1);
    t1 = t2;
    t2 = tmp;
}

#include "settings.h"

void MDFN_DispMessage(const char *format, ...);

void MDFN_LoadGameCheats(void *override);
void MDFN_FlushGameCheats(int nosave);

void MDFN_MidSync(EmulateSpecStruct *espec);
void MDFN_MidLineUpdate(EmulateSpecStruct *espec, int y);

#include "mednafen-driver.h"

#include "mednafen-endian.h"

#endif
