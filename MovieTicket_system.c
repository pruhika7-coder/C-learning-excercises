#include<stdio.h>
int  main()
{
    int coupon,age; double price=0;
    printf("---~WELCOME TO THEATRE~---\n\n");
    printf("Enter your age:");
    scanf("%d",&age);
    if(age<=12&&age>0) 
    {
    price= 8.00;
    printf("CATEGORY:child\n");
    }
    else if(age<65&&age>12)
    {
        price=12.00;
        printf("CATEGORY:adult\n");
    }
    else
    {
        price=10.00;
        printf("CATEGORY:senior citizen\n");
    }
    
    printf("If u have any coupon enter code, if not enter 0\n");
    scanf("%d",&coupon);
    if(coupon==2904)
    {
        price=price-2.00;
        printf("the coupon gices $2 decrement! have a nice day\n");
    }
     printf("Your total is %f\n",&price);
     printf("HAVE A GREAT MOVIE EXPERIENCE, Make sure to leave a rating :)");
     
    
}
