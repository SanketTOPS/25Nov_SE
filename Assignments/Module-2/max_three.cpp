#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	printf("Enter number3:");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("A is max");
	}
	else if(b>a && b>c)
	{
		printf("B is max");
	}
	else
	{
		printf("C is max");
	}
}
