#include<stdio.h>
#include <math.h>
int main()
{
	int X,n,i,j,odd_term,fact;
	float sum=0,up,sign,term;
	printf("Input the value of X and its range : \n");
	scanf("%d%d",&X,&n);
	for(i=1;i<=n;i++)
	{
		odd_term= (2 * n) - 1;
		fact=1;
		for(j=1;j<=odd_term;j++)
		{
			fact=fact*j;
		}
		up=pow(X,odd_term);
		sign=pow(-1,i+1);
		term=(sign * up) /fact;
		printf("\n\nThe term is %f",term);
		sum=sum + term;
		printf("\n\nThe sum is %f",sum);
		//sum = (sum) + ( (1.0 * pow(-1,i+1) ) * (1.0 * pow (X,odd_term) ) )/ (1.0 * fact);
	}
	printf("\n\nSum = %f",sum);
	return 0;
}
