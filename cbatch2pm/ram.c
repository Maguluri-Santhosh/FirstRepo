#include<stdio.h>
  main()
 {
  float amount,total,charge,unit;
   printf("unit ");
   scanf("%f",&unit);
 {
    if (unit <=50)
    {
	amount=unit*0.50;
	}	
	else if (unit<=150)
	{
		amount= 25+(unit-50)*0.75;
		
	}
	else 
  {
	amount=220+(unit-250*1.50);
	charge=amount*0.20;
	total=amount+charge;
	{
		printf("bill=%.2f",total);
	}
  }
}
}
