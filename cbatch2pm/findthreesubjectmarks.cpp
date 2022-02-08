#include<stdio.h>

	main()
	{
		
		int m,p,c,avrg;
		
		printf("Enter 3 sub marks:");
		scanf("%d%d%d",&m,&p,&c);
		
		avrg=(m+p+c)/3;
		
		printf("avrg=%d\n",avrg);
		
		if(m<40||p<40||c<40)
		printf("FAIL");
		
		else if(avrg>=60)
		printf("FIRST DIV");
		else if(avrg>=50)
		
		printf("SECOND DIV");
		
		else
		printf("THIRD DIV");
		
	}
