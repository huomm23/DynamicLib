#ifdef STORAGE_TYPE
#undef STORAGE_TYPE
#endif

/**
 * ����洢����
 */
#define STORAGE_TYPE static

#include "DynamicLib.h"

#ifdef BaseDllWrapper
#undef BaseDllWrapper
#endif

#include "DllWrapper.h"
#include "DllWrapper.cpp"

/**
 * ����ʹ洢������ͬ�İ�װ����
 */
#define BaseDllWrapper StaticDllWrapper

#ifdef OVERRIDE_TYPE
#undef OVERRIDE_TYPE
#endif

#define OVERRIDE_TYPE static