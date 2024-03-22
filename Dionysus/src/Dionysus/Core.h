#pragma once

#ifdef DYS_PLATFORM_WINDOWS
	#ifdef DYS_BUILD_DLL
		#define DIONYSUS_API __declspec(dllexport)
	#else
		#define DIONYSUS_API __declspec(dllimport)
	#endif
#endif