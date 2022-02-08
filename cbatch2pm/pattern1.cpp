#include<stdio.h>
main()

{
	int i,j,k=0;
for(i=1;i<=4;i++)
{
	for(j=1;j<=i;j++)
	{
		k++;
		if(i==j)
		printf("%d",k);
		else
		printf("   ");
		
	}
	printf("\n");


}
