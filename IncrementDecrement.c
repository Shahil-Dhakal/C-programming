#include <stdio.h>
main()
{
	int a=10,b=5;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	a=++a + ++a;
	printf("\n\n\na = %d\n",a);
	b=a-- - --b;
	printf("\n\n\ b = %d\n\n\n",b);
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	return 0;
}