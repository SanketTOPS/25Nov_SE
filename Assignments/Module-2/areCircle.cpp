#include<stdio.h>
float pi=3.14;
main()
{
	int r;
	float area;
	printf("Enter value of R:");
	scanf("%d",&r);
	area=pi*r*r;
	printf("\n\nArea of circle:%f",area);
}
