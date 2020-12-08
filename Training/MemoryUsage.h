#pragma once
#include<iostream>
#include<Windows.h>
#include<Psapi.h>
using namespace std;
class MemoryUsage
{
private :
	MEMORYSTATUSEX memInfo;
	PROCESS_MEMORY_COUNTERS_EX pmc;
public:
	void printMemoryUsage();
	DWORDLONG totalVirtualMemory();
	DWORDLONG virtualMemoryCurrentlyUsed();
	SIZE_T virtualMemoryCurrentlyUsedByCurrentProcess();
	DWORDLONG totalPhysicalMemory();
	DWORDLONG pyhsicalMemoryCurrentlyUsed();
	SSIZE_T PhysicalMemoryCurrentlyUsedByCurrentProcess();
	void deneme();
};

