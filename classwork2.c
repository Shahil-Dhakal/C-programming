/*
	An electricity board charges according to the following rates For thefirst 
	20 units --------Rs 80 
	For the next 80units --------Rs 7.5 per unit
	For next 100 units -----------Rs8.5 per unit
	For beyond 200 units -------Rs 9.5 per unit
	 All users are also charged meter charge, which is equal to Rs. 50. 
	 Also tax = 5% of charge.
	 Write a program to read number of units consumed and print the total charge.
	 
 */
 
 #include <stdio.h>
int main()
{
	int unit,sum;
	float tax,amount;
	printf("Input Units : \n");
	scanf("%d",&unit);
	if(unit<=100){
		sum=(unit * 40) + 50;
		tax = (0.05)*sum;
		amount = sum + tax;
		printf("TOTAL AMOUNTS = %.2f\n",amount);
	}
	else if(unit>100 && unit<=300){
		sum=(unit * 50) + 50;
		tax = (0.05)*sum;
		amount = sum + tax;
		printf("TOTAL AMOUNTS = %.2f\n",amount);
	}
	else{
		sum=(unit * 60) + 50;
		tax = (0.05)*sum;
		amount = sum + tax;
		printf("TOTAL AMOUNTS = %.2f\n",amount);
	}
}