//Writea program to find the number given by user is exactly divisible by 2, 3 and 6 or not.

#include <stdio.h>
main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num%2==0){
		if(num%3==0){
			if(num%6==0){
				printf("The Input Number is divisible by 2,3 and 6.\n");
			}
			else{
				printf("No the number is not exactly divisible by 2,3 and 6.\n");
			}
			}
			else{
				printf("No the number is not exactly divisible by 2,3 and 6.\n");
			}
	}
	else{
		printf("No the number is not exactly divisible by 2,3 and 6.\n");
	}
	return 0;
}