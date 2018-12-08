#pragma once

#ifdef E330_PLATFORM_WINDOWS
	#ifdef E330_BUILD_DLL
		#define E330_API __declspec(dllexport)
	#else
		#define E330_API __declspec(dllimport)
	#endif
#else
	#error E330 only supports Windows!
#endif
