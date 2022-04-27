#include <stdio.h>
int main()
{
	int num,reverse=0,rem,real;
	printf("Input number : ");
	scanf("%d",&num);
	real=num;
	while(num!=0){
		rem=num%10;
		reverse=(reverse * 10) + rem;
		num=num/10;
	}
	printf("The reverse is %d.\n",reverse);
	if(reverse==real){
		printf("\nPalindrome!");
	}
	return 0;
}
