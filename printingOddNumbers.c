//Done by Shahil Dhakal
//BE SE Morning 1st sem (NCIT)

#include <stdio.h>
int main()
{
	int n1,n2;
	printf("Input two numbers respectively to print all the odd numbers between them : \n");
	scanf("%d%d",&n1,&n2);
	if(n2>n1)
	{
		while (n1<=n2)
		{
			if(n1%2!=0)
			{
				printf("\n\n%d is odd number.\n",n1);
			}
			n1++;
		}
	}
	else
	{
		printf("Please Input the Second number greater than first one.\n\n");
	}
	return 0;
}
