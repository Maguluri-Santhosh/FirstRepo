#include<stdio.h>
main()
{
	int x,y;
	printf("enter number");
	scanf("%d%d",&x,&y);
	int ch;
	
	if(x>0&&y>0)
	{
	
	
	printf("Enter 1.addition \n 2.subtraction  \n 3.multiplication \n 4.division \n5.modulus");
	printf("enter character:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("sum=%d",x+y);break;
		case 2: printf("sum=%d",x-y);break;
		case 3: printf("sum=%d",x*y);break;
		case 4: printf("sum=%d",x/y);break;
		case 5: printf("modulus=%d",x%y); break;
		default: printf("Invalid choice!!!!");
		
	}
	

}
}
