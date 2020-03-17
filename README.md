[![Build Status](https://travis-ci.org/libretro/beetle-pce-libretro.svg?branch=master)](https://travis-ci.org/libretro/beetle-pce-libretro)
[![Build status](https://ci.appveyor.com/api/projects/status/6hii7ljchwjp80la/branch/master?svg=true)](https://ci.appveyor.com/project/bparker06/beetle-pce-fast-libretro/branch/master)

# Beetle PC-Engine libretro

Beetle PC Engine is a port/fork of Mednafen's PC Engine (pce) module to the libretro API.

This core supports both the PC Engine/TurboGrafx-16 and SuperGrafx. It also has CD-ROM2 support and is your one-stop-core for accurate PC Engine emulation.

Features:
- Sub-instruction timing granularity (but greater than cycle granularity)
- All sprite sizes supported.
- 16-sprites per line limit emulated.
- Accurate HuC6280 flags emulation.
- Dot-clock emulation for more accurate aspect ratios.
- Support for Street Fighter 2's HuCard hardware.
- Support for Populous's backup RAM.
- 6-button pad emulation.
- Mouse emulation.
- Working CD+G playback.
