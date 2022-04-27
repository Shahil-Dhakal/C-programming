#include <stdio.h>
#include <math.h>
int main(){
	int num,rem,cube,sum=0,check;
	printf("Input a number : ");
	scanf("%d",&num);
	check=num;
	while(num!=0){
		rem=num%10;
		cube=pow(rem,3);
		sum +=cube;
		num=num/10;
	}
	printf("Sum of cubes of given number : %d.",sum);
	if(sum==check){
		printf("\n\nArmstrong!");
	}
	return 0;
}
