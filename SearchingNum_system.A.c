#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i,found=0,search;
    printf("Enter the number u want to find:");
    scanf("%d",&search);
    for(i=0;i<5;i++)
    {
        if(a[i]==search){
        found=1;
        break;
    }
    }
    if(found==1)
    {
        printf("Element found!!!\n");
    }
    else
    {
        printf("Element not found!!!");
    }
    return 0;
}
