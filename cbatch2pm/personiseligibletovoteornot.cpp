#include<stdio.h>
	main()
	{
		int age;
		printf("Enter age:");
		scanf("%d",&age);
		
		if(age>=18 &&age<=50)
		printf("Eligible");
		
		if(age<=18||age>50)
		printf("Not Eligible");
		
	}
