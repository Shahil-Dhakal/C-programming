#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : \n");
    scanf("%d",&num);
    if(num%2==0 && num%3==0 && num%6==0)
    {
        printf("Yes, The number is exactly divisible by 2,3 and 6.");
    }
    else
    {
        printf("NO, The number is not exactly divisible by 2,3 and 6.");
    }
    return 0;
} 
