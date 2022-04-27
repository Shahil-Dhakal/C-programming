#include <stdio.h>
main()
{
	int num1;
	printf("Enter a number : \n");
	scanf("%d",&num1);
	if(num1%2==0){
		printf("%d is an Even Number.\n",num1);
	}
	else{
		printf("%d is an Odd Number.\n",num1);
	}
	return 0;
}