#include "MemoryUsage.h"

void MemoryUsage::printMemoryUsage()
{
	cout << "total virtual memor usage: " << totalVirtualMemory() << endl;
	cout << "virtual memory vurrently used: " << virtualMemoryCurrentlyUsed() << endl;
	cout << "virtual memory currently used by current process: " << virtualMemoryCurrentlyUsedByCurrentProcess() << endl;
	cout << "total physical memory: " << totalPhysicalMemory() << endl;
	cout << "physical memory currenly used: " << pyhsicalMemoryCurrentlyUsed()<<endl;
	cout << "pyhsical memory currently used by current process: " << PhysicalMemoryCurrentlyUsedByCurrentProcess() << endl;
}

DWORDLONG MemoryUsage::totalVirtualMemory()
{
	memInfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&memInfo);
	return memInfo.ullTotalPageFile;
}
DWORDLONG MemoryUsage::virtualMemoryCurrentlyUsed()
{
	memInfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&memInfo);
	return memInfo.ullTotalPageFile - memInfo.ullAvailPageFile;
}

SIZE_T MemoryUsage::virtualMemoryCurrentlyUsedByCurrentProcess()
{
	GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
	return pmc.PrivateUsage;
}

DWORDLONG MemoryUsage::totalPhysicalMemory()
{
	memInfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&memInfo);
	return memInfo.ullTotalPhys;
}

DWORDLONG MemoryUsage::pyhsicalMemoryCurrentlyUsed()
{
	memInfo.dwLength = sizeof(MEMORYSTATUSEX);
	GlobalMemoryStatusEx(&memInfo);
	return memInfo.ullTotalPhys - memInfo.ullAvailPhys;
}

SSIZE_T MemoryUsage::PhysicalMemoryCurrentlyUsedByCurrentProcess()
{
	GetProcessMemoryInfo(GetCurrentProcess(),(PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
	return pmc.WorkingSetSize;
}

void MemoryUsage::deneme()
{
	GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS*)&pmc, sizeof(pmc));
	//cout << pmc.cb<<endl;
	//cout << pmc.PagefileUsage<<endl;
	//cout << pmc.PeakPagefileUsage << endl;
	//cout << pmc.PeakWorkingSetSize << endl;//olabilir
	//cout << pmc.PrivateUsage << endl;
	//cout << pmc.QuotaNonPagedPoolUsage << endl;
	//cout << pmc.QuotaPagedPoolUsage << endl;
	//cout << pmc.QuotaPeakNonPagedPoolUsage << endl;
	//cout << pmc.QuotaPeakPagedPoolUsage << endl;
	//cout << pmc.WorkingSetSize << endl;//olabilir.
}
