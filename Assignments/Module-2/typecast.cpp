#include<stdio.h>
main()
{
	int a,b;
	float c;
	printf("Enter value of A and B:");
	scanf("%d%d",&a,&b);
	printf("\nAdd:%d",a+b);
	printf("\nSub:%d",a-b);
	printf("\nMul:%d",a*b);
	c=float(a)/float(b); //typecasting
	printf("\nDiv:%f",c);
}
