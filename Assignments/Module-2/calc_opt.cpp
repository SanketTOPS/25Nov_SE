#include<stdio.h>
main()
{
	int n1,n2;
	char choice;
	printf("Enter Number1:");
	scanf("%d",&n1);
	printf("Enter Number2:");
	scanf("%d",&n2);
	printf("\nSelect any oe option:");
	printf("\n+:Add");
	printf("\n-:Sub");
	printf("\n*:Mul");
	printf("\n/:Div\n\n");
	scanf(" %c",&choice);
	switch(choice)
	{
		case '+':
		printf("\nAdd:%d",n1+n2);
		break;
		
		case '-':
		printf("\nSub:%d",n1-n2);
		break;
		
		case '*':
		printf("\nMul:%d",n1*n2);
		break;
		
		case '/':
		printf("\nDiv:%d",n1/n2);
		break;
		
		default:
		printf("\nError!Invalid choice...");
		break;
		
	}
}
