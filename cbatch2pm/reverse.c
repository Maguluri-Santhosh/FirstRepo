#include<stdio.h>
main()
{
	int n,i,r,d;
	printf("enter n:");
	scanf("%d",&n);
	r=0;
	while(n!=0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	printf("%d",r);
}
