#include<stdio.h>
	main()
	{
		int x,y,big;
		printf("Enter 2 different numbers:");
		scanf("%d%d",&x,&y);
		
		big=x>y,x=y;
		printf("Biggest Number:%d",big);
		
	}
