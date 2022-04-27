#include <stdio.h>
int main()
{
	int i,j=1,m;	//i=multiplication number(ie.asking from user)  &  j=multiplication(ie.from 1 to 10)  &  m=Multiplication.
	printf("Input a number : ");
	scanf("%d",&i);
	while(j<=10)
	{
		m=i*j;
		printf("%d * %d = %d\n\n",i,j,m);
		j++;
	}
	printf("\n\nWhile Loop Ends Here.\n");
	return 0;
}
