#include<stdio.h>
main()
{
	int a[10],n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elemnts in the array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("\nelements before the sorting are ");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
