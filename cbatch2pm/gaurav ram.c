#include<stdio.h>
main()
{
int unit;
float amount=0,total=0,charge=0;
printf("Enter unit ");
scanf("%d",&unit);
 
    if (unit<=50)
    {
	amount=unit*0.50;
	}	
	else if (unit<=150)
	{
	amount= unit*0.50+(unit-50)*0.75;
	}
	else if(unit<=250)
	amount=unit*0.50+(unit-50)*0.75+(unit-150)*1.20;
	else
	{
		amount=unit*0.50+(unit-50)*0.75+(unit-150)*1.20+(unit-250)*1.50;
	}
	charge=amount*0.20;
	total=amount+charge;

	printf("bill=%f",total);

}//end of main
