/* WAP To ask input from user until user wants and show the coount of 0,positivi and negative at the end*/

#include <stdio.h>
#include <conio.h>
int main()
{
	int n1,p=0,n=0,z=0,n2=1;
	char d;
	do{
		printf("Input a number : ");
		scanf("%d",&n1);
		if(n1>0){
			p++;
		}
		else if (n1==0){
			z++;
		}
		else{
			n++;
		}
		printf("\nInput y / Y to continue : ");
		scanf(" %c",&d);
	}while(d=='y' || d=='Y');
	printf("\n\nTotal +ve count = %d.",p);
	printf("\n\nTotal -ve count = %d.",n);
	printf("\n\nTotal 0 count = %d.",z);
	_getch();
	return 0;
}
