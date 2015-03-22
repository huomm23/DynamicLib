#ifdef BaseDllWrapper
#undef BaseDllWrapper
#endif

#include "DllWrapper.h"
#include "DllWrapper.cpp"

/**
 * ����ʹ洢������ͬ�İ�װ����
 */
#define BaseDllWrapper ShareDllWrapper

#ifdef DEFINE_FUNCTION
#undef DEFINE_FUNCTION
#endif

#include "TypeGroup.h"

/**
 * ������������
 * 
 * @param _Name
 *        ��������������
 * @param _Pointer
 *        ����������ԭ��
 * @param _CallType
 *        �����ĵ��ù���
 */
#define DEFINE_FUNCTION(_Name, _Pointer, _CallType) \
protected: \
	\
	/* ����ָ���������� */ \
	PtrHolder _Name##_PtrHolder; \
	\
public: \
	\
	/* ��������ָ���ԭ�� */ \
	typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9, TypeGroup<_Pointer>::Type_Arg10 arg10, TypeGroup<_Pointer>::Type_Arg11 arg11, TypeGroup<_Pointer>::Type_Arg12 arg12, TypeGroup<_Pointer>::Type_Arg13 arg13) \
	{ \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9, TypeGroup<_Pointer>::Type_Arg10 arg10, TypeGroup<_Pointer>::Type_Arg11 arg11, TypeGroup<_Pointer>::Type_Arg12 arg12) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg13, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9, TypeGroup<_Pointer>::Type_Arg10 arg10, TypeGroup<_Pointer>::Type_Arg11 arg11) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg12, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9, TypeGroup<_Pointer>::Type_Arg10 arg10) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg11, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg10, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg9, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg8, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4, arg5, arg6, arg7) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg7, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4, arg5, arg6) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg6, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4, arg5) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg5, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3, arg4) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg4, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2, arg3) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg3, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1, arg2) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg2, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)(arg1) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	TypeGroup<_Pointer>::Type_Result _Name() \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg1, _Null>::Value, "too few arguments in function call!"); \
		if (_Name##_PtrHolder.ptr == nullptr) { \
			if (GetProcAddress(&_Name##_PtrHolder, #_Name)) { \
				procs.push_back(&_Name##_PtrHolder); \
			} \
		} \
		return (_Name##_PtrHolder.ptr != nullptr) ? ((_##_Name)_Name##_PtrHolder.ptr)() : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	}

#ifdef OVERRIDE_TYPE
#undef OVERRIDE_TYPE
#endif

#define OVERRIDE_TYPE virtual

#include "OtherStore.h"