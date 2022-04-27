#include <stdio.h>
main()
{
	int num1,num2,swap;
	printf("Input two numbers : \n");
	scanf("%d%d",&num1,&num2);
	swap=num1;
	num1=num2;
	num2=swap;
	printf("The numbers after swapping are %d and %d.",num1,num2);
	return 0;
}
