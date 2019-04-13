// WBC2.cpp

#include <stdio.h>
#include <string.h>

/*
	output unicode to korean
_wsetlocale(LC_ALL, L"Korean");
#include "locale.h"
*/



int main() {
	wchar_t str[] = L"ABC";
	int size = sizeof(str);
	int len = wcslen(str);

	wprintf(L"Array Size : %d \n", size);
	wprintf(L"String Length: %d \n", len);

	return 0;

}