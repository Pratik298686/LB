
//Accept single digit number from user and print it into word
#include<stdio.h>
void Display(int iNo)
{
    switch (iNo)
    {
    case 0:
        printf("zero");
        break;
    case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three");
        break;
        case 4:
        printf("four");
        break;
        case 5:
        printf("five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("eight");
        break;
        case 9:
        printf("nine");
        break;    
    
    default:
        printf("not a single digit");
        break;
    }
}
int main()
{
    int iValue =0;
    printf("enter the number\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}