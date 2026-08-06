#include<stdio.h>

int findmax(int x,int y);

int main()
{
    int n1=29,n2=04,max;
    max= findmax(n1,n2);
    printf("The maximum number is:%d",max);
    return 0;
}
int findmax(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
