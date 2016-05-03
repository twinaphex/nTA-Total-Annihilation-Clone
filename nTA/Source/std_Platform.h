// std_Platform.h //                               \author Logan Jones
///////////////////                                   \date 1/12/2002
/// \file
/// \brief ...
/////////////////////////////////////////////////////////////////////
#ifndef _STD_PLATFORM_H_
#define _STD_PLATFORM_H_
/////////////////////////////////////////////////////////////////////


#ifdef _WIN32

	#define WIN32_LEAN_AND_MEAN			1
	#include <winsock2.h>
	#include <windows.h>
	#include <zmouse.h>
	#include <mmsystem.h>

	// Platform specific stuff used everywhere
	struct std_PlatformParameters
	{
		// The current instance for the app.
		// Should be assigned from WinMain at startup.
		HINSTANCE			hInstance;

		// The handle of the main window for the app.
		// The window is created by the gfx system, so this
		// handle should be assigned there.
		HWND				hMainWindow;

		// Address of the app's window message proc.
		// This should also assigned from WinMain at startup.
		// Whenever the app's window class is created, this pointer will
		// be given for the lpfnWndProc parameter
		WNDPROC				pWndProc;

		// The name of the window class used for the app
		char				WindowClass[ 32 ];

		// Name given for the main window
		char				MainWindowName[ 128 ];
    };

#define Param_t DWORD


#elif __APPLE__
#include "TargetConditionals.h"
#include <CoreFoundation/CoreFoundation.h>
#include <CoreGraphics/CoreGraphics.h>

#define BOOL bool
#define LPVOID void *
#define LPCTSTR const char *
#define LPTSTR char *
#define LPSTR char *
#define DWORD uint32_t
#define WORD uint16_t
#define BYTE uint8_t
#define UINT32 uint32_t
#define INT32 int32_t
#define UINT16 uint16_t
#define INT16 int16_t
#define UINT8 uint8_t
#define INT8 int8_t
#define UINT unsigned int
#define LRESULT long
#define stricmp strcasecmp
#define strnicmp strncasecmp
#define ZeroMemory(P,SZ) memset(P,0,SZ)
#define CALLBACK
#define SOCKET int

#define Param_t size_t

#define LOWORD(l) ((WORD)(l))
#define HIWORD(l) ((WORD)(((DWORD)(l) >> 16) & 0xFFFF))
#define LOBYTE(w) ((BYTE)(w))
#define HIBYTE(w) ((BYTE)(((WORD)(w) >> 8) & 0xFF))

#define MAX_PATH 255

typedef struct PALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
} PALETTEENTRY, *LPPALETTEENTRY;

#define INVALID_SOCKET (int)(~0)

#if TARGET_IPHONE_SIMULATOR
// iOS Simulator
#elif TARGET_OS_IPHONE
// iOS device
#elif TARGET_OS_MAC
// Other kinds of Mac OS
#else
#  error "Unknown Apple platform"
#endif

// Platform specific stuff used everywhere
struct std_PlatformParameters
{
    // Name given for the main window
    char				MainWindowName[ 128 ];
};


#else
#  error "Unknown Platform"
#endif


/////////////////////////////////////////////////////////////////////
#endif // !defined(_STD_PLATFORM_H_)
