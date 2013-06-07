// Fibbonachi.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"



int Fib(int n)
{
	if(n == 0) return 0;
	if(n == 1) return 1;
	int a0, a1, a2, nin;
	a0 = 0;
	a1 = 1;
	nin = n;
	while(nin > 1)
	{
		a2 = a0 + a1;
		a0 = a1;
		a1 = a2;
		--nin;
		//printf("\n%d = %d\n", n - nin + 1, a1);
	}
	return a1;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int n = 40;
	printf("\n%d-th member of Fibbonachi sequence is: ", n);
	//Fib();
	printf("%d\n", Fib(n));
	getchar();
}

