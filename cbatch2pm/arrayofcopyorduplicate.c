#include<stdio.h>
int main()
{
	int i,j,numbers[]={1,1,11,11,12,13,14,12};
	
	for(i=0;i<8;i++)
	{
		for(j=i;j<8;j++)
		{
			if(numbers[i]==numbers[j+1])
			printf("number %d",numbers[i]);
				
				
			
		}
	}
}
