#pragma once

#ifdef __cplusplus
	#define START_EXTERN_C extern "C" {
	#define END_EXTERN_C }
#else
	#define START_EXTERN_C
	#define END_EXTERN_C
#endif

//Everything uses it, move it out here to make life easier if we have decide to change it.
#include <inttypes.h>
