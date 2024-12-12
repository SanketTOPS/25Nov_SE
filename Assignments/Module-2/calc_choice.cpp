#include<stdio.h>
main()
{
	int n1,n2,choice;
	printf("Enter Number1:");
	scanf("%d",&n1);
	printf("Enter Number2:");
	scanf("%d",&n2);
	printf("\nSelect any oe option:");
	printf("\n1:Add");
	printf("\n2:Sub");
	printf("\n3:Mul");
	printf("\n4:Div\n\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("\nAdd:%d",n1+n2);
		break;
		
		case 2:
		printf("\nSub:%d",n1-n2);
		break;
		
		case 3:
		printf("\nMul:%d",n1*n2);
		break;
		
		case 4:
		printf("\nDiv:%d",n1/n2);
		break;
		
		default:
		printf("\nError!Invalid choice...");
		break;
		
	}
}
