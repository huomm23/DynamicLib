#ifdef STORAGE_TYPE
#undef STORAGE_TYPE
#endif

/**
 * ����洢����
 */
#define STORAGE_TYPE

#include "DynamicLib.h"

#ifdef BaseDllWrapper
#undef BaseDllWrapper
#endif

#include "DllWrapper.h"
#include "DllWrapper.cpp"

/**
 * ����ʹ洢������ͬ�İ�װ����
 */
#define BaseDllWrapper ShareDllWrapper

#ifdef OVERRIDE_TYPE
#undef OVERRIDE_TYPE
#endif

#define OVERRIDE_TYPE virtual