[![Build Status](https://travis-ci.org/libretro/beetle-pce-libretro.svg?branch=master)](https://travis-ci.org/libretro/beetle-pce-libretro)

# Beetle PC Engine libretro

Beetle PC Engine is a port/fork of Mednafen's PC Engine "pce" module to the libretro API. This core supports both CD-ROM<sup>2</sup> and SuperGrafx emulation.

This PC Engine module is more accurate than the Fast module, which trades away typically unneeded accuracy in favor of speed. Unlike [Beetle PCE Fast](https://github.com/libretro/beetle-pce-fast-libretro), Beetle PCE retains built-in SuperGrafx support. SuperGrafx support can alternatively be found in the [Beetle SuperGrafx core](https://github.com/libretro/beetle-supergrafx-libretro).

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

## Building

This core can be built with `make`.

## Documentation

TBD

## Related Cores

Beetle PC Engine Fast: https://github.com/libretro/beetle-pce-fast-libretro

Beetle SuperGrafx: https://github.com/libretro/beetle-supergrafx-libretro
