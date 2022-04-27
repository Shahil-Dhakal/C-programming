#include <stdio.h>
main()
{
	char a;
	printf("Input a character : ");
	scanf("%c",&a);
	if(a >= 97 && a<= 122){
		printf("Entered Character is in lower case.\n");
	}
	else if(a>= 65 && a<= 90){
		printf("Entered Character is in upper case.\n");
	}
	else if(a>= 48 && a<= 57){
		printf("Entered Character is a digit.\n");
	}
	else{
		printf("Entered Character is a special symbol.\n");
	}
	return 0;
}