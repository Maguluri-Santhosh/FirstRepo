#include<stdio.h>
main()
{
   int n,i,x[10],min,temp,j;
   printf("\n enter the size =>");
   scanf("%d",&n);
   printf("enter the array elements");
   for(i=0;i<n;i++)
   scanf("%d",&x[i]);
   printf(" your array element before sorting are");
   for(i=0;i<n;i++)
   {
   
      printf("%d\n",x[i]);
   }
   for(i=0;i<n;i++)
   {
   	
   	 min=i;
   	 for(j=i+1;j<n;j++)
   	 {
   	
	   if(x[min]>x[i])
	   {
	   	 min=j;
	   	  
		} 	
		
	 }
             temp=x[i];
			 x[i]=x[min];
			 x[min]=temp;	 
   }
   
    printf("the array elements");
   for(i=0;i<n;i++)
   printf("%d\n ",x[i]);
}
