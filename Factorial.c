#include <stdio.h>
#include <math.h>
int main(){
	int num,i;
	printf("Input a number to calculate its factorial : ");
	scanf("%d",&num);
	i=num-1;
	if(num>0){
		do{
		num=num *i;
		i--;
	}while(i!=0);
	printf("Factorial of given number is %d.",num);
	}
	else if(num==0){
		printf("Factorial of 0 is 1.");
	}
	else{
		printf("Please input a positive number to calculate the factorial.");
	}
	return 0;
}

/*
#include <stdio.h>
#include <math.h>
int main(){
	int num,i=1;
	printf("Input a number to calculate its factorial : ");
	scanf("%d",&num);
	while(num!=0){
		i=i*num;
		num--;
	}
	printf("Factorial of the given number is %d.",i);
	return 0;
}
*/
