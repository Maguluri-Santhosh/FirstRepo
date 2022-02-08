#include<stdio.h>
main()
{
	char x[20]="Ram";
	int i;
	printf("Enter  a string :");
	printf("%c\n",x[2]); //m
	printf("%s\n",x);   //Ram
	printf(x);  //Ram
	printf("\n");
	puts(x);  //Ram
	printf("\n");
	for(i=0;x[i]!='\0';i++)
	{
	
	printf("%c",x[i]);
}

}
