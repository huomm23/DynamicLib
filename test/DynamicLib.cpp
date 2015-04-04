#include "ShareStore.h"

class A : public BaseDllWrapper<A> {
	DEFINE_CDECL_FUNCTION(Func0, void());
	DEFINE_CDECL_FUNCTION(Func1, void(int));
	DEFINE_CDECL_FUNCTION(Func2, void(int, int));
	DEFINE_CDECL_FUNCTION(Func3, void(int, int, int));
	DEFINE_CDECL_FUNCTION(Func4, void(int, int, int, int));
	DEFINE_CDECL_FUNCTION(Func5, void(int, int, int, int, int));
	DEFINE_CDECL_FUNCTION(Func6, void(int, int, int, int, int, int));
	DEFINE_CDECL_FUNCTION(Func7, void(int, int, int, int, int, int, int));
	DEFINE_CDECL_FUNCTION(Func8, void(int, int, int, int, int, int, int, int));
	DEFINE_CDECL_FUNCTION(Func9, void(int, int, int, int, int, int, int, int, int));
	DEFINE_CDECL_FUNCTION(Func10, void(int, int, int, int, int, int, int, int, int, int));
	DEFINE_CDECL_FUNCTION(Func11, void(int, int, int, int, int, int, int, int, int, int, int));
	DEFINE_CDECL_FUNCTION(Func12, void(int, int, int, int, int, int, int, int, int, int, int, int));
	DEFINE_CDECL_FUNCTION(Func13, void(int, int, int, int, int, int, int, int, int, int, int, int, int));

	// ��಻�ܳ���13������ >> error C2027: ʹ����δ�������͡�_Get_TypeGroup<_Tx>��
	// DEFINE_CDECL_FUNCTION(Func14, void(int, int, int, int, int, int, int, int, int, int, int, int, int, int));
};

#ifdef WIN32

#include "ShareStore.h"

class ShareUser32 : public BaseDllWrapper<ShareUser32> {
	DEFINE_STDCALL_FUNCTION(GetClientRect, BOOL(HWND, LPRECT));
	DEFINE_STDCALL_FUNCTION(GetDesktopWindow, HWND());

	// ��̬�洢ʹ��������ģʽ
	DEFINE_DEFAULT_FILE("User32.dll");
};

#include "StaticStore.h"

class StaticUser32 : public BaseDllWrapper<StaticUser32> {
	DEFINE_STDCALL_FUNCTION(GetClientRect, BOOL(HWND, LPRECT));
	DEFINE_STDCALL_FUNCTION(GetDesktopWindow, HWND());

	// ��̬�洢ʹ��������ģʽ
	DEFINE_DEFAULT_FILE("User32.dll");
};

#endif

#include "ShareStore.h"

class DllTest : public BaseDllWrapper<DllTest> {
	DEFINE_CDECL_FUNCTION(fnDllTest, int());
};

#include <assert.h>

int main(int argc, char* argv[])
{
	A().Func0<_Null>();

	// ���ò���̫��
	// A().Func1<_Null>(); 

	A().Func1<_Null>(1);

	// ���ò���̫��
	// A().Func2<_Null>(); 
	// A().Func2<_Null>(1);

	A().Func2<_Null>(1, 2);

	// ���ò���̫��
	// A().Func3<_Null>(); 
	// A().Func3<_Null>(1);
	// A().Func3<_Null>(1, 2);

	A().Func3<_Null>(1, 2, 3);

	// ���ò���̫��
	// A().Func4<_Null>(); 
	// A().Func4<_Null>(1);
	// A().Func4<_Null>(1, 2);
	// A().Func4<_Null>(1, 2, 3);

	A().Func4<_Null>(1, 2, 3, 4);

	// ���ò���̫��
	// A().Func5<_Null>(); 
	// A().Func5<_Null>(1);
	// A().Func5<_Null>(1, 2);
	// A().Func5<_Null>(1, 2, 3);
	// A().Func5<_Null>(1, 2, 3, 4);

	A().Func5<_Null>(1, 2, 3, 4, 5);

	// ���ò���̫��
	// A().Func6<_Null>(); 
	// A().Func6<_Null>(1);
	// A().Func6<_Null>(1, 2);
	// A().Func6<_Null>(1, 2, 3);
	// A().Func6<_Null>(1, 2, 3, 4);
	// A().Func6<_Null>(1, 2, 3, 4, 5);

	A().Func6<_Null>(1, 2, 3, 4, 5, 6);

	// ���ò���̫��
	// A().Func7<_Null>(); 
	// A().Func7<_Null>(1);
	// A().Func7<_Null>(1, 2);
	// A().Func7<_Null>(1, 2, 3);
	// A().Func7<_Null>(1, 2, 3, 4);
	// A().Func7<_Null>(1, 2, 3, 4, 5);
	// A().Func7<_Null>(1, 2, 3, 4, 5, 6);

	A().Func7<_Null>(1, 2, 3, 4, 5, 6, 7);

	// ���ò���̫��
	// A().Func8<_Null>();
	// A().Func8<_Null>(1, 2);
	// A().Func8<_Null>(1, 2, 3);
	// A().Func8<_Null>(1, 2, 3, 4);
	// A().Func8<_Null>(1, 2, 3, 4, 5);
	// A().Func8<_Null>(1, 2, 3, 4, 5, 6);
	// A().Func8<_Null>(1, 2, 3, 4, 5, 6, 7);

	A().Func8<_Null>(1, 2, 3, 4, 5, 6, 7, 8);

	// ���ò���̫��
	// A().Func9<_Null>(); 
	// A().Func9<_Null>(1);
	// A().Func9<_Null>(1, 2);
	// A().Func9<_Null>(1, 2, 3);
	// A().Func9<_Null>(1, 2, 3, 4);
	// A().Func9<_Null>(1, 2, 3, 4, 5);
	// A().Func9<_Null>(1, 2, 3, 4, 5, 6);
	// A().Func9<_Null>(1, 2, 3, 4, 5, 6, 7);
	// A().Func9<_Null>(1, 2, 3, 4, 5, 6, 7, 8);

	A().Func9<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9);

	// ���ò���̫��
	// A().Func10<_Null>(); 
	// A().Func10<_Null>(1);
	// A().Func10<_Null>(1, 2);
	// A().Func10<_Null>(1, 2, 3);
	// A().Func10<_Null>(1, 2, 3, 4);
	// A().Func10<_Null>(1, 2, 3, 4, 5);
	// A().Func10<_Null>(1, 2, 3, 4, 5, 6);
	// A().Func10<_Null>(1, 2, 3, 4, 5, 6, 7);
	// A().Func10<_Null>(1, 2, 3, 4, 5, 6, 7, 8);
	// A().Func10<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9);

	A().Func10<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0);

	// ���ò���̫��
	// A().Func11<_Null>(); 
	// A().Func11<_Null>(1);
	// A().Func11<_Null>(1, 2);
	// A().Func11<_Null>(1, 2, 3);
	// A().Func11<_Null>(1, 2, 3, 4);
	// A().Func11<_Null>(1, 2, 3, 4, 5);
	// A().Func11<_Null>(1, 2, 3, 4, 5, 6);
	// A().Func11<_Null>(1, 2, 3, 4, 5, 6, 7);
	// A().Func11<_Null>(1, 2, 3, 4, 5, 6, 7, 8);
	// A().Func11<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9);
	// A().Func11<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0);

	A().Func11<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1);

	// ���ò���̫��
	// A().Func12<_Null>(); 
	// A().Func12<_Null>(1);
	// A().Func12<_Null>(1, 2);
	// A().Func12<_Null>(1, 2, 3);
	// A().Func12<_Null>(1, 2, 3, 4);
	// A().Func12<_Null>(1, 2, 3, 4, 5);
	// A().Func12<_Null>(1, 2, 3, 4, 5, 6);
	// A().Func12<_Null>(1, 2, 3, 4, 5, 6, 7);
	// A().Func12<_Null>(1, 2, 3, 4, 5, 6, 7, 8);
	// A().Func12<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9);
	// A().Func12<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0);
	// A().Func12<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1);
	A().Func12<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2);

	// ���ò���̫��
	// A().Func13<_Null>(); 
	// A().Func13<_Null>(1);
	// A().Func13<_Null>(1, 2);
	// A().Func13<_Null>(1, 2, 3);
	// A().Func13<_Null>(1, 2, 3, 4);
	// A().Func13<_Null>(1, 2, 3, 4, 5);
	// A().Func13<_Null>(1, 2, 3, 4, 5, 6);
	// A().Func13<_Null>(1, 2, 3, 4, 5, 6, 7);
	// A().Func13<_Null>(1, 2, 3, 4, 5, 6, 7, 8);
	// A().Func13<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9);
	// A().Func13<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0);
	// A().Func13<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1);
	// A().Func13<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2);
	A().Func13<_Null>(1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3);

	//////////////////////////////////////////////////////////////////////////

#ifdef WIN32

	RECT rcWnd;

	// ��̬�洢������
	ShareUser32 mUser32;
	HWND hWnd = mUser32.GetDesktopWindow<_Null>();
	mUser32.GetClientRect<_Null>(hWnd, &rcWnd);
	mUser32.Free();

	// ��̬�洢������
	hWnd = StaticUser32::GetDesktopWindow<_Null>();
	StaticUser32::GetClientRect<_Null>(hWnd, &rcWnd);
	StaticUser32::Free();

#endif

	//////////////////////////////////////////////////////////////////////////

	DllTest DllTestInst;

	// ��̬�洢�л�������Դ
	DllTestInst.Load("DllTestOne.dll");
	assert(1 == DllTestInst.fnDllTest<_Null>());
	DllTestInst.Free();

	// ��̬�洢�л�������Դ
	DllTestInst.Load("DllTestTwo.dll");
	assert(2 == DllTestInst.fnDllTest<_Null>());
	DllTestInst.Free();

	return 0;
}