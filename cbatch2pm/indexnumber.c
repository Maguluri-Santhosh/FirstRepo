#include<stdio.h>
main()
{
	int a[10],n,i,j,e;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the elemets you want to search");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(e==a[i])
		{
			printf("your element is found at the position %d",a[i]);
		}
		
	}
}
