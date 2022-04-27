/*
	A company does insurance of the driver in following cases 
	a.If the driver is married
	b.If the driver is unmarried male and above 30 years of age
	c.If the driver is unmarried female and above 25 years of age?
	Write the program using logical operators
*/

#include <stdio.h>
main()
{
	int a,age;
	printf("IF YOU ARE A DRIVER, FOLLOW THESE STEPS TO CONFORM INSURANCE.\n\n");
	printf("Are you married?\n\nIf yes enter '0', If no enter '1' : \n");
	scanf("%d",&a);
	if(a==0){
		printf("\n\nYes, You can have your insurance done.\n");
	}
	else if(a==1){
		printf("\nIf you are male enter '1', If you are female enter '0' : \n");
		scanf("%d",&a);
		if(a!=0 && a!=1){
				printf("\n\n\nenter '0' OR '1' to provide information.\nOther keyboards wont function.\n\n\n");
		}
		else if(a==1 || a==0){
			printf("\n\nEnter your age : ");
			scanf("%d",&age);
			if(a==1 && age>30){
				printf("\n\nYes, You can have your insurance done.\n");
			}
			else if(a==0 && age>25){
				printf("\n\nYes, You can have your insurance done.\n");
			}
			else{
				printf("\n\nSorry, You are not eligible for insurance yet.\n");
			}
		}
	}
	else{
		printf("\n\n\nenter '0' for yes\nenter '1' for no\nOther keyboards wont function.\n");
	}
}