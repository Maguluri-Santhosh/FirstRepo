#include<stdio.h>
main()
{
	int i,j,k,small,big,n,a[20],count=0,ccount=0;
	printf("Enter the size of that array");
	scanf("%d",&n);
	printf("enter the elements in that array");
	
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	small=a[0];
	big=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>=big)
		{
			if(a[i]==big)
			{
				count++;
				//printf("\n%d is repeated",a[i]);
			}
			big=a[i];
    	}
	}
	printf("%d is big number and its repeated %d times\n",big,count);
	count=0;
		for(i=0;i<n;i++)
		{
			if(a[i]<small)
			{
				if(a[i]==small)
				{
					count++;
					//printf("\n %d is repeated",a[i]);
					
				}
				small=a[i];
			}
		}
		printf("\n %d is small and is repeated %d times",small,count);
		
}
