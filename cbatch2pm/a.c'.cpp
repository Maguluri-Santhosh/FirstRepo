#include<stdio.h>
main()
{
   int n,i,a[10];
   printf("\n enter the size =>");
   scanf("%d",&n);
   printf("enter the array elements");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("\n your array element before sorting are");
   for(i=0;i<n;i++)
     printf(" %d ",a[i]);
}
