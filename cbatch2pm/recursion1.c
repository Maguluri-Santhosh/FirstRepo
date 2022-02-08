#include<stdio.h>

	int febo(int);
	int febo(int n)
	{
		if(n==0 || n==1)
		{
			return n;
		
		}else 
		{
			return febo(n-1)+febo(n-2);
		}
	}
