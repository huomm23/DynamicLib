#ifndef Dll_Wrapper_H
#define Dll_Wrapper_H

#ifndef WIN32
typedef void* HMODULE;
#else
#include <Windows.h>
#endif

#include <vector>
#include <string>
#include <memory>

/**
 * ����ָ�������
 */
struct PtrHolder {

	/**
	 * ������ָ��
	 */
	void* ptr;

	/**
	 * ���캯��
	 */
	PtrHolder(){
		ptr = nullptr;
	}

	/**
	 * ��ֵ���캯��
	 */
	PtrHolder(const PtrHolder& other) {
		ptr = other.ptr;
	}

};

/**
 * �����׼�ַ�����
 */
#ifndef STD_STRING_TYPE
typedef std::string StdString;
#endif

/**
 * ���嵼�������б��洢һ��ĺ���ָ��
 */
typedef std::vector<PtrHolder*> FuncList;

/**
 * ���嵼�������б��洢��ȫ�ĺ���ָ��
 */
typedef std::vector<std::shared_ptr<PtrHolder>> SafeFuncList;

/**
 * ��̬����/������װ��,��̬�洢����
 */
template<typename _Type>
class StaticDllWrapper {

public:

	/**
	 * ��ȡ��ǰģ��ı�ǩ
	 * 
	 * @return ���ص�ǰģ��ı�ǩ
	 */
	static StdString GetTag() {
		return _tag;
	}

	/**
	 * ���õ�ǰģ��ı�ǩ
	 *
	 * @param tag
	 *         ģ��ı�ǩ
	 */
	static void SetTag(StdString tag) {
		_tag = tag;
	}

	/**
	 * ����ģ�顣�ظ�����ǰ���
	 * ����Free()�ͷ��Ѽ���ģ�顣
	 *
	 * @param path
	 *        ģ��ľ���·��
	 * @return ���سɹ����� true��ʧ�ܷ��� false��
	 */
	static bool Load(StdString path);

	/**
	 * ��ȡ��ǰģ����ļ����
	 * 
	 * @return ���ص�ǰģ��ľ��
	 */
	static HMODULE GetHandle() {
		return m_hModule;
	}

	/**
	 * �ͷ�ģ��
	 */
	static void Free();

	/**
	 * ��ȡ�������
	 * 
	 * @param funcPtr
	 *        ����ָ�������
	 * @param procName
	 *        ��������������
	 * @return �ɹ���õ�ַ���� true�����򷵻� false��
	 */
	static bool GetProcAddress(PtrHolder* funcPtr, StdString procName);

protected:
	/**
	 * ���ɺ���ָ�����������
	 *
	 * @return �������ɵ�ָ����������
	 */
	static PtrHolder* MakePtrHolder();

	/**
	 * �Ƿ�ʹ��������ģʽ
	 *
	 * @return ʹ��������ģʽ���� true�����򷵻� false��
	 */
	static bool LazyLoad() { 
		return false; 
	}

	/**
	 * ���Լ���ģ���ļ�
	 */ 
	static void TryLoad() {
	}

protected:
	/**
	 * ģ����
	 */
	static HMODULE m_hModule;

	/**
	 * ������ڱ�
	 */
	static SafeFuncList procs;

	/**
	 * ��ǰģ��ı�ǩ
	 */
	static StdString _tag;
};

/**
 * ��̬����/������װ��,��̬�洢����
 */
template<typename _Type>
 class ShareDllWrapper {

public:
	/**
	 * ���캯��
	 */
	ShareDllWrapper(StdString tag);

	/**
	 * ��������
	 */
	~ShareDllWrapper(void);

	/**
	 * ���캯��
	 */
	ShareDllWrapper();

	/**
	 * ��ȡ��ǰģ��ı�ǩ
	 * 
	 * @return ���ص�ǰģ��ı�ǩ
	 */
	StdString GetTag() {
		return _tag;
	}

	/**
	 * ���õ�ǰģ��ı�ǩ
	 *
	 * @param tag
	 *         ģ��ı�ǩ
	 */
	void SetTag(StdString tag) {
		_tag = tag;
	}

	/**
	 * ����ģ�顣�ظ�����ǰ���
	 * ����Free()�ͷ��Ѽ���ģ�顣
	 *
	 * @param path
	 *        ģ��ľ���·��
	 */
	bool Load(StdString path);

	/**
	 * ��ȡ��ǰģ����ļ����
	 * 
	 * @return ���ص�ǰģ��ľ��
	 */
	HMODULE GetHandle() {
		return m_hModule;
	}

	/**
	 * �ͷ�ģ��
	 */
	void Free();

	/**
	 * ��ȡ�������
	 * 
	 * @param funcPtr
	 *        ����ָ�������
	 * @param procName
	 *        ��������������
	 * @return �ɹ���õ�ַ���� true�����򷵻� false��
	 */
	bool GetProcAddress(PtrHolder* funcPtr, StdString procName);

protected:
	/**
	 * �Ƿ�ʹ��������ģʽ
	 */
	virtual bool LazyLoad() { 
		return false; 
	}

	/**
	 * ���Լ���ģ���ļ�
	 */ 
	virtual void TryLoad() {
	}

protected:
	/**
	 * ģ����
	 */
	HMODULE m_hModule;

	/**
	 * ��ǰģ��ı�ǩ
	 */
	StdString _tag;

	/**
	 * ������ڱ�
	 */
	FuncList procs;
};

#endif /* Dll_Wrapper_H */