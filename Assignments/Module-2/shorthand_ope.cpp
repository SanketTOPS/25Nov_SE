#include<stdio.h>
main()
{
	int a;
	printf("Enter value of A:");
	scanf("%d",&a);
	printf("\nOriginal A:%d",a);
	
	/*a+=10; //a=a+10
	printf("\nA:%d",a);*/
	
	a-=10; //a=a-10
	printf("\nA:%d",a);
	
	a*=10; //a=a*10
	printf("\nA:%d",a);
	
}
