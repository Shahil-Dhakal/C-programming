#include <stdio.h>
int main()
{
	int n1,sum=0,i=0;
	do{
		printf("Input the numbers unitl its done and input zero(0) to represent it's done : \n");
		scanf("%d",&n1);
		sum += n1;
		i++;
	}while(n1!=0);
	if(sum!=0){
		sum = (float) sum / (i-1) ; //Here, sum in left portion represents average of the entered numbers.
		printf("\n\nThe average of entered numbers is %d",sum);
		printf("\nThank You!");
	}
	else{
		printf("You entered 0 to terminate program without entering any value. So, There is no average value too.");
		printf("\nThank You!");
	}
	return 0;
}
