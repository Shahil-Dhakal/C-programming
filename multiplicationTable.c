//WAP to display the numbers from 20 to 200 that is divisible by 5.
//Done by Shahil Dhakal
//BE SE Morning 1st sem (NCIT)

#include <stdio.h>
int main()
{
	int i=20;
	printf("All the numbers between 20 to 200 that is divisible by 5 : ");
	while(i<=200)
	{
		if(i%5==0)
		{
			printf("\n\n%d is divisible by 5.\n");
		}
		i++;
	}
	printf("\n\nWhile Loop Ends Here.\n");
	return 0;
}
