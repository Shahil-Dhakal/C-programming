#include <stdio.h>
int main()
{
    int choice,price=0,sub_choice;
    while (1)
    {
        printf("Input 1 to order Momo,\nInput 2 to order pizza,\nInput 3 to order CFC,\nInput 4 to order coffee.\nElse input any other number to end ordering.\n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            while(1)
            {
                printf("\n\nInput 1 for veg momo\nInput 2 for chicken momo.\nInput other keyboard to skip.\n");
                scanf("%d",&sub_choice);
                switch (sub_choice)
                {
                    case 1:
                    printf("\n****Veg MOMO = Rs.200");
                    price+= 200;
                    break;
                    
                    case 2:
                    printf("\n****Chicken MOMO = Rs.250");
                    price+= 250;
                    break;


                    default:goto labelFirst;
                }
            }
            labelFirst:
            break;

            case 2:
            while(1)
            {
                printf("\n\nInput 1 for Mushroom Pizza\nInput 2 for chicken Pizza.\nInput other keyboard to skip.\n");
                scanf("%d",&sub_choice);
                switch (sub_choice)
                {
                    case 1:
                    printf("\n****Mushroom Pizza = Rs.350");
                    price+= 350;
                    break;
                    
                    case 2:
                    printf("\n****Chicken Pizza = Rs.450");
                    price+= 450;
                    break;


                    default:goto labelSecond;
                }
            }
            labelSecond:
            break;

            case 3:
            printf("\n\nCFC = Rs.500\n\n");
            price+= 500;
            break;

            case 4:
            printf("\n\nCoffee = Rs.300\n\n");
            price+= 300;
            break;
            
            default:goto label;
        }
    }
    label:
    printf("\n\nYour total bill = Rs.%d",price);
    printf("\nThank You!");
    return 0;
}
