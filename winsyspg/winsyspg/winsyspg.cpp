﻿// MBCS1.cpp

#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "ABC한글";
	int size = sizeof(str);
	int len = strlen(str);

	printf("배열의 크기: %d \n", size);
	printf("문자의 크기: %d \n", len);

	return 0;

}