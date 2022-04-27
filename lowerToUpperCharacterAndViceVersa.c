/*
	Write a  program  to read  a  character from  keyboard  and convert  the 
	input character into uppercase if it is lowercase and viceversa.
*/

#include <stdio.h>
main()
{
	char ch;
	printf("Enter any character : ");
	scanf("%c",&ch);
	if(ch>96 && ch<123){
		ch=(ch-32);
		printf("Uppercase : %c\n",ch);
	}
	else if(ch>64 && ch<91){
		ch=(ch+32);
		printf("Lowercase : %c\n",ch);
	}
	else{
		printf("Input any one alphabet only.");
	}
}