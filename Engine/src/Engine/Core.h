#pragma once
#ifdef ENG_PLATFORM_WINDOWS
	#ifdef ENG_BUILD_DLL
		#define ENG_API _declspec(dllexport)
	#else 
		#define ENG_API _declspec(dllimport)
	#endif
	#else #error Engine only supports Windows.
#endif

