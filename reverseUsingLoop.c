#include <stdio.h>
int main()
{
	int num,reverse=0,rem;
	printf("Input number : ");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		reverse=(reverse * 10) + rem;
		num=num/10;
	}
	printf("The reverse is %d.",reverse);
	return 0;
}
