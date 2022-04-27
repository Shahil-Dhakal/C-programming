//Done by Shahil Dhakal
//BE SE Morning 1st sem (NCIT)

#include <stdio.h>
int main()
{
	int i=2000;
	printf("All the even numbers between 2000 to 5000 : ");
	while(i<=5000)
	{
		if(i%2==0)
		{
			printf("\n\n%d is even.\n",i);
		}
		i++;
	}
	printf("\n\nWhile Loop Ends Here.\n");
	return 0;
}
