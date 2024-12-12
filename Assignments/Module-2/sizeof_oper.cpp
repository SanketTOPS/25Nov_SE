#include<stdio.h>
main()
{
	int a=32;
	long int b=4234234;
	float c=34.5;
	double d=323453.54534543;
	long double e=432455465564.534534;
	char f='t';
	char str[10]="TOPS";
	
	printf("\nSize of Int:%d",sizeof(a));
	printf("\nSize of Long Int:%d",sizeof(b));
	printf("\nSize of Float:%d",sizeof(c));
	printf("\nSize of Double:%d",sizeof(d));
	printf("\nSize of Long Double:%d",sizeof(e));
	printf("\nSize of Char.:%d",sizeof(f));
	printf("\nSize of String:%d",sizeof(str));
	
	
}
