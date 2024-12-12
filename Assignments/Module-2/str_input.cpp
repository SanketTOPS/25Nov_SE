#include<stdio.h>
main()
{
	register char str[10];
	printf("Enter any string:");
	//scanf("%s",&str);
	gets(str);
	//printf("\n\nString:%s",str);
	puts(str);
	
}
