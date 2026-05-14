#include<stdio.h>
int main()
{
    int ch,ch2;
    printf("---~WELCOME TO RUHI'S CAFE~--- \n\n");
    printf("-----ITEMS-----\n");
    printf("Choose anything:\n1.Brownies\n2.Chocolate milk\n3.Macha\n4.Cappucino\n");
    printf("Enter ur option(1-4)\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
              printf("You've choosen Brownies!,your total will be $3.00\n");
             break;
        case 2:
             printf("You've choosen chocolate milk!, your total will be $2.00\n");
             break;
        case 3:
             printf("You've choosen Macha!\n");
             
             printf("Enter the size u want(1-2):\n");
             scanf("%d",&ch2);
             switch(ch2)
             {
                 case 1: printf("The size you've choosen is small\n");
                 break;
              
                 case 2: printf("The size you've choosen is medium\n");
                 break;
                 
                 default:printf("invalid size\n");
                 break;
             }
        case 4:
             printf("You've choosen Cappucino!,your total is $3.00\n");
             break;
        default : 
        printf("The choice u entered doesn't exsist in the menu!Try again\n");
        
    }
}
