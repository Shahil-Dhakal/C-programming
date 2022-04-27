#include <stdio.h>
#include <math.h>
int main()
{
    int n1,n2,choice;
    while (1)
    {
        printf("\n\nInput two numbers : \n");
        scanf("%d%d",&n1,&n2);
        printf("\n\nInput\n1 for addition,\n2 for subtraction,\n3 for multiplication,\n4 for division,\n5 for square,\n6 for cube : \n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:printf("\n\n%d + %d = %d",n1,n2,n1+n2);
            break;

            case 2:printf("\n\n%d - %d = %d",n1,n2,n1-n2);
            break;

            case 3:printf("\n\n%d * %d = %d",n1,n2,n1*n2);
            break;

            case 4:printf("\n\n%d / %d = %d",n1,n2,n1/n2);
            break;

            case 5:printf("\n\n%d^(2) = %d",n1,pow(n1,2));
            break;

            case 6:printf("\n\n%d^(3) = %d",n2,pow(n2,3));
            break;
            
            default: goto label;
        }
    }
    label:
    return 0;
}
