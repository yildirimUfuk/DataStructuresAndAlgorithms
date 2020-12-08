#include "ProcessCreating.h"

void ProcessCreating::processCreate()
{
	HANDLE hProcess;
	HANDLE hThreads;
	STARTUPINFO si;
	PROCESS_INFORMATION pi;
	DWORD dwProcess = 0;
	DWORD dwThreads = 0;
	ZeroMemory(&si, sizeof(si));
	ZeroMemory(&pi, sizeof(pi));
	BOOL bCreateProcess = NULL;
	bCreateProcess = NULL;
	bCreateProcess = CreateProcess(L"C:\\Program Files\\Windows Media Player\\wmplayer.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
	if (bCreateProcess == false)
		cout << "not created!" << GetLastError << endl;
	else
	{
		cout << "process id:\t" << pi.dwProcessId << endl;
		cout << "thread id:\t" << pi.dwThreadId << endl;
		cout << "getprocessid: \t" << GetProcessId(pi.hProcess) << endl;
		cout << "getThreadId: \t" << GetThreadId(pi.hThread) << endl;
	}
	WaitForSingleObject(pi.hProcess, INFINITE);
	CloseHandle(pi.hThread);
	CloseHandle(pi.hProcess);
}

void ProcessCreating::processCreate2()
{
	PROCESS_MEMORY_COUNTERS_EX pmc;
	GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
	cout << pmc.WorkingSetSize;
}
