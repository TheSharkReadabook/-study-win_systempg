//MBCS_WBCS1.cpp

// #define UNICODE
// #define _UNICODE

#undef _UNICODE
#undef UNICODE

#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

int wmain()
{
	TCHAR str[] = _T("1234567");
	int size = sizeof(str);
	printf("String length : %d \n", size);
	return 0;

}