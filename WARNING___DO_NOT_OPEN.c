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
        printf("\nK timi stri hau yaa purus?\nENTER '1' for male and '0' for female : \n");
        scanf("%d",&a);
        if(a==1){
            printf("Tro Umer bhan  : ");
            scanf("%d",&age);
            if(age>30){
                printf("\ninsurance liye rani k garxas..budheskal ni laesakyo..thopda ni tei kuchya tin jstai xa.\n\n\n");
            }
            else{
                printf("\nVhag 30 barsa katya xaina insurance lina aauxa..chala jaa.\n\n\n");
            }
        }
        else if(a==0){
            printf("Ani nani ko umer chaii kati ni? : ");
            scanf("%d",&age);
            if(age>25){
                printf("\nOoich! Insurance paeyo vaneshi.\n\n\n");
            }
            else{
                printf("\nNani 25 barsa nakaati kaa insurance lina aako.jau jau jau..ghr jau\n\n\n");
            }
        }
        else{
            printf("\n\ntalai kutai kutai khana man laa ho..0 ya 1 madhya eauta thich vanya suninas.\n\n\n");
        }
    }
    else{
        printf("\n\n\nMuzi Khuru khuru 1 ya 0 thich na ...batho kina banxas.\n\n\n");
    }
}
