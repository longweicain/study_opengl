#ifndef GLES_H
#define GLES_H

#ifdef PLATFORM_WINDOWS
#include "gles_windows.h"
#elif defined PLATFORM_LINUX
#include "gles_linux.h"
#elif defined PLATFORM_ANDROID
#include "gles_android.h"
#endif

#endif //GLES_H