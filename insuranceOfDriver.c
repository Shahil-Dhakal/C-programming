/*
	A company does insurance of the driver in following cases a.
	If the driver is married.
	If the driver is unmarried male and above 30 years of agec.
	If the driver is unmarried female and above 25 years of age?
	Write the program without using any logical operators.
*/

#include <stdio.h>
int main()
{
	int a,age;
	printf("If you are a driver, Complete following processes to conform insurance.\n");
	printf("\nAre You Married?\nIf 'YES' ENTER-'1', If 'NO' ENTER-'0' : ");
	scanf("%d",&a);
	if(a==1){
		printf("\n\nYes, You can have insurence.\n\n\n");
	}
	else if(a==0){
		printf("\nAre You male or Female?\nENTER '1' for male and '0' for female : \n");
		scanf("%d",&a);
		if(a==1){
			printf("Enter Your Age : ");
			scanf("%d",&age);
			if(age>30){
				printf("\nYes, You can have insurence.\n\n\n");
			}
			else{
				printf("\nSorry, You are not eligible for insurance.\n\n\n");
			}
		}
		else if(a==0){
			printf("Enter Your Age : ");
			scanf("%d",&age);
			if(age>25){
				printf("\nYes, You can have insurence.\n\n\n");
			}
			else{
				printf("\nSorry, You are not eligible for insurance.\n\n\n");
			}
		}
		else{
			printf("\n\nPlease, Enter '1'- For Yes AND '0'-For No.\n\n\n");
		}
	}
	else{
		printf("\n\n\nPlease, Enter '1'- For Yes AND '0'-For No.\n\n\n");
	}
}
