#include<math.h>
	main()
	
	{
		int a,b,c,k;
		printf("Enter a,b,c:");
		scanf("%d%d%d",&a,&b,&c);
		
		k=pow(b,2)-4*a*c;
		if(k==0)
		printf("%lf",(double)-b/(2*a));
		else if(k>0)
		{
			printf("root1=%lf\n",(-b+sqrt(k))/(2*a));
			printf("root2=%lf\n",(-b-sqrt(k))/(2*a));
			
		}
		else
		{
			printf("root1=%lf+i%lf",(double)-b/(2*a),sqrt(k)/(2+a));
			printf("root2=%lf-i%lf",(double)-b/(2*a),sqrt(-k)/(2*a));
			
		}
	}
