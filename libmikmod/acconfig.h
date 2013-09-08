/* ========== Package information */

/* Package name (libmikmod) */
#undef PACKAGE
/* Package version */
#undef VERSION

/* ========== Features selected */

/* Define if your system supports binary pipes (i.e. Unix) */
#undef DRV_PIPE

/* Define if you want a .aiff file writer driver */
#undef DRV_AIFF

/* Define if the AudioFile audio server driver is compiled */
#undef DRV_AF
/* Define if the AIX audio driver is compiled */
#undef DRV_AIX
/* Define if the Linux ALSA driver is compiled */
#undef DRV_ALSA
/* Define if the Enlightened Sound Daemon driver is compiled */
#undef DRV_ESD
/* Define if the HP-UX audio driver is compiled */
#undef DRV_HP
/* Define if the Network Audio System driver is compiled */
#undef DRV_NAS
/* Define if the OpenAL driver is compiled */
#undef DRV_OPENAL
/* Define if the Open Sound System driver is compiled */
#undef DRV_OSS
/* Define if the Linux SAM9407 driver is compiled */
#undef DRV_SAM9407
/* Define if the SDL audio driver is compiled */
#undef DRV_SDL
/* Define if the SGI audio driver is compiled */
#undef DRV_SGI
/* Define if the Sun audio driver or compatible (NetBSD, OpenBSD)
   is compiled */
#undef DRV_SUN
/* Define if the Linux Ultra driver is compiled */
#undef DRV_ULTRA
/* Define this if you want the MacOS X CoreAudio driver */
#undef DRV_OSX
/* Define this if you want the Carbon Mac Audio driver */
#undef DRV_MAC
/* Define if the OS/2 direct audio (DART) driver is compiled */
#undef DRV_DART
/* Define if the OS/2 MMPM/2 MCI driver is compiled */
#undef DRV_OS2
/* Define if the Windows DirectSound driver is compiled */
#undef DRV_DS
/* Define if the Windows WINMM driver is compiled */
#undef DRV_WIN
/* Define if the Windows XAudio2 driver is compiled */
#undef DRV_XAUDIO2

/* Define if you want a debug version of the library */
#undef MIKMOD_DEBUG
/* Define if you want runtime dynamic linking of ALSA and EsounD drivers */
#undef MIKMOD_DYNAMIC
/* Define if you want to use SIMD (AltiVec or SSE2) optimizations */
#undef MIKMOD_SIMD
/* Define to 0 or 1 to override MIKMOD_UNIX in mikmod_internals.h. */
#undef MIKMOD_UNIX
/* Define if your system provides POSIX.4 threads */
#undef HAVE_PTHREAD

/* ========== Build environment information */

/* Define if your system is SunOS 4.* */
#undef SUNOS
/* Define if your system is AIX 3.* - might be needed for 4.* too */
#undef AIX
/* Define if your system defines random(3) and srandom(3) in math.h instead
   of stdlib.h */
#undef SRANDOM_IN_MATH_H
/* Define if your system has RTLD_GLOBAL defined in <dlfcn.h> */
#undef HAVE_RTLD_GLOBAL
/* Define if your system needs leading underscore to function names in dlsym() calls */
#undef DLSYM_NEEDS_UNDERSCORE

/* define this if you are running a bigendian system (motorola, sparc, etc) */
#undef WORDS_BIGENDIAN
