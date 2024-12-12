#include<stdio.h>
main()
{
	int s1,s2,s3,s4,total;
	float pr;
	printf("Enter Subject1:");
	scanf("%d",&s1);
	printf("Enter Subject2:");
	scanf("%d",&s2);
	printf("Enter Subject3:");
	scanf("%d",&s3);
	printf("Enter Subject4:");
	scanf("%d",&s4);
	total=s1+s2+s3+s4;
	printf("\nTotal:%d",total);
	pr=total/4;
	printf("\nPR:%f",pr);
}
