#ifndef DynamicLib_H
#define DynamicLib_H

#include "TypeGroup.h"

#if !defined( STORAGE_TYPE )
	#error "��Ҫֱ�Ӱ������ļ�����ʹ�á�StaticStore.h�����ߡ�ShareStore.h��"
#endif

/**
 * ������������
 * 
 * @Param _Name
 *        ��������������
 * @Param _Pointer
 *        ����������ԭ��
 * @Param _CallType
 *        �����ĵ��ù���
 */
#define DEFINE_FUNCTION(_Name, _Pointer, _CallType) \
public: \
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9, TypeGroup<_Pointer>::Type_Arg10 arg10, TypeGroup<_Pointer>::Type_Arg11 arg11, TypeGroup<_Pointer>::Type_Arg12 arg12, TypeGroup<_Pointer>::Type_Arg13 arg13) \
	{ \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9, TypeGroup<_Pointer>::Type_Arg10 arg10, TypeGroup<_Pointer>::Type_Arg11 arg11, TypeGroup<_Pointer>::Type_Arg12 arg12) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg13, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9, TypeGroup<_Pointer>::Type_Arg10 arg10, TypeGroup<_Pointer>::Type_Arg11 arg11) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg12, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9, TypeGroup<_Pointer>::Type_Arg10 arg10) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg11, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8, TypeGroup<_Pointer>::Type_Arg9 arg9) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg10, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7, TypeGroup<_Pointer>::Type_Arg8 arg8) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg9, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6, TypeGroup<_Pointer>::Type_Arg7 arg7) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg8, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4, arg5, arg6, arg7) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5, TypeGroup<_Pointer>::Type_Arg6 arg6) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg7, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4, arg5, arg6) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4, TypeGroup<_Pointer>::Type_Arg5 arg5) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg6, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4, arg5) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3, TypeGroup<_Pointer>::Type_Arg4 arg4) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg5, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3, arg4) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2, TypeGroup<_Pointer>::Type_Arg3 arg3) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg4, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2, arg3) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1, TypeGroup<_Pointer>::Type_Arg2 arg2) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg3, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1, arg2) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name(TypeGroup<_Pointer>::Type_Arg1 arg1) \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg2, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export(arg1) : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	} \
	\
	template<typename _Type> \
	STORAGE_TYPE TypeGroup<_Pointer>::Type_Result _Name() \
	{ \
		static_assert(TypeIsSame<TypeGroup<_Pointer>::Type_Arg1, _Null>::Value, "too few arguments in function call!"); \
		typedef TypeGroup<_Pointer>::_CallType##_Ptr _##_Name; \
		/*STORAGE_TYPE*/ _##_Name dll_export = (_##_Name)GetProcAddress(#_Name); \
		return (dll_export != nullptr) ? dll_export() : Default<TypeGroup<_Pointer>::Type_Result>()(); \
	}

/**
 * ���� __cdecl ��������
 * 
 * @Param _Name
 *        ��������������
 * @Param _Pointer
 *        ����������ԭ��
 */
#define DEFINE_CDECL_FUNCTION(_Name, _Pointer) \
	DEFINE_FUNCTION(_Name, _Pointer, __cdecl)

/**
 * ���� _stdcall ��������
 * 
 * @Param _Name
 *        ��������������
 * @Param _Pointer
 *        ����������ԭ��
 */
#define DEFINE_STDCALL_FUNCTION(_Name, _Pointer) \
	DEFINE_FUNCTION(_Name, _Pointer, _stdcall)

/**
 * ����������ģʽ��ֻ��� ShareDllWrapper ��Ч
 */
#define DEFINE_DEFAULT_FILE(_FileName) \
	OVERRIDE_TYPE bool LazyLoad() { return true; } \
	OVERRIDE_TYPE void TryLoad() { Load(_FileName); }

#endif /* DynamicLib_H */