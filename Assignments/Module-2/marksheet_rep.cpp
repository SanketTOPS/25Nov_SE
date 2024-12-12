#include<stdio.h>
main()
{
	int s1,s2,s3,s4,total;
	float pr;
	printf("Enter Subject1 Mark:");
	scanf("%d",&s1);
	printf("Enter Subject2 Mark:");
	scanf("%d",&s2);
	printf("Enter Subject3 Mark:");
	scanf("%d",&s3);
	printf("Enter Subject4 Mark:");
	scanf("%d",&s4);
	total=s1+s2+s3+s4;
	printf("\nTotal:%d",total);
	pr=total/4;
	printf("\nPR:%f",pr);
	
	if(pr>=70)
	{
		printf("\nResult:Dist. - A+");
	}
	else if(pr>=60)
	{
		printf("\nResult:First Class - A");
	}
	else if(pr>=50)
	{
		printf("\nResult:Second Class - B");
	}
	else if(pr>=40)
	{
		printf("\nResult:Pass Class - C");
	}
	else
	{
		printf("\nResult:FAIL");
	}
}
