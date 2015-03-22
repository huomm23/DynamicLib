#ifdef DEFINE_CDECL_FUNCTION
#undef DEFINE_CDECL_FUNCTION
#endif

/**
 * ���� __cdecl ��������
 * 
 * @param _Name
 *        ��������������
 * @param _Pointer
 *        ����������ԭ��
 */
#define DEFINE_CDECL_FUNCTION(_Name, _Pointer) \
	DEFINE_FUNCTION(_Name, _Pointer, __cdecl)

#ifdef DEFINE_STDCALL_FUNCTION
#undef DEFINE_STDCALL_FUNCTION
#endif

/**
 * ���� _stdcall ��������
 * 
 * @param _Name
 *        ��������������
 * @param _Pointer
 *        ����������ԭ��
 */
#define DEFINE_STDCALL_FUNCTION(_Name, _Pointer) \
	DEFINE_FUNCTION(_Name, _Pointer, _stdcall)

#ifdef DEFINE_DEFAULT_FILE
#undef DEFINE_DEFAULT_FILE
#endif

/**
 * ����������ģʽ��ֻ��� ShareDllWrapper ��Ч
 */
#define DEFINE_DEFAULT_FILE(_FileName) \
	OVERRIDE_TYPE bool LazyLoad() { return true; } \
	OVERRIDE_TYPE void TryLoad() { Load(_FileName); }