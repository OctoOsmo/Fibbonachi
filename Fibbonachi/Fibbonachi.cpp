// Fibbonachi.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int result;
int first = 0, second =1;
int n;

inline void fibb(int &a, int &b, int &n)
{
	if(n != 0)
	{
		a = b;
		b = a+b;
		--n;
		fibb(a, b, n);
	}else
	{
		//fibb(a, b, n);
		//--n;
		result = a + b;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	printf("Fbbonachi\n");
	n = 15;
	printf("%d member of sequence= ", n + 1);
	fibb(first, second, n);
	printf("%d\n", result);
	getchar();
	return 0;
}

