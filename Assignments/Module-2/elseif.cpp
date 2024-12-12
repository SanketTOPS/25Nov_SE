#include<stdio.h>
main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	
	if(n>0)
	{
		printf("\nNumber is +ve.");
	}
	else if(n<0)
	{
		printf("\nNumber is -ve");
	}
	else
	{
		printf("\nNumber is ZERO");
	}
	
}
