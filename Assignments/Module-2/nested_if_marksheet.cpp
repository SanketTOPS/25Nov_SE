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
	
	if(s1>=40 && s2>=40 && s3>=40 && s4>=40) //parent condition
	{
		total=s1+s2+s3+s4;
		printf("\nTotal:%d",total);
		pr=total/4;
		printf("\nPR:%f",pr);
		
		if(pr>=70) //child
		{
			printf("\nResult:Dist. - A+");
		}
		else if(pr>=60) //child
		{
			printf("\nResult:First Class - A");
		}
		else if(pr>=50) //child
		{
			printf("\nResult:Second Class - B");
		}
		else if(pr>=40) //child
		{
			printf("\nResult:Pass Class - C");
		}
	}
	else
	{
		printf("\nResult:FAIL");
	}
}
