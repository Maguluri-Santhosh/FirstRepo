#include<stdio.h>
	main()
	{
		
		int x=50,y=100,temp;
		
		printf("Before Swapping:\n");
		printf("x=%d\t y=%d\n",x,y);
		
		temp=x;
		x=y;
		y=temp;
		
		printf("After Swapping:\n");
		printf("x=%d\t y=%d",x,y);
		
		
	}
