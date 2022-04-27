#include <stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("Input a number : ");
	scanf("%d",&n);
	while(n!=0){
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("\n\n\nThe sum is : %d\n",sum);
	return 0;
}
