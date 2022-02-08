#include<stdio.h>
main()
{
int arr1[100],n,ctr=0;
int i,j,k=0;
 
 printf("numbers of element");
 scanf("%d",&n);
 printf("enter %d element");
 for(i=0;i<n;i++)
 printf("element%d",i);
 scanf("%d",&arr1[i]);
 printf("uniqu element");
 for(i=0;i<n;i++)
 {
 	ctr=0;
 	for(j=0,k=n;j<k+1;j++)
 	{
 		if(i!=j)
 		{ 
 		  if (arr1[i]==arr1[j] )
 		   {
 		  		ctr++;
		   }
		 }
	 }
 	if (ctr==0)
 	{  
 	
 	   printf("%d",arr1[i]);
	 }
 }}

