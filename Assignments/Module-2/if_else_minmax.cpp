#include<stdio.h>
main()
{
	int a,b;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	if(a<b) //TRUE
	{
		printf("A is min");
	}
	else //FALSE
	{
		printf("A is max");
	}
}
