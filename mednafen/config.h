#ifndef CONFIG_H
#define CONFIG_H

#ifdef __MACTYPES__
typedef unsigned char  Byte;
#endif

#ifndef PS3_CONFIG_H
#define PS3_CONFIG_H

#ifdef __CELLOS_LV2__
#define ftello(x) (off_t)ftell(x)
#define fseeko(x,y,z) fseek(x, (long int)y, z)
#undef HAVE_SYS_PARAM_H
#endif

#endif

#endif
