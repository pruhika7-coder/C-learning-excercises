#include<stdio.h>
void sum();
void sub();
void mul();
void Div();
int main() //declaration
{
    sum ();
    sub ();
    mul ();
    Div ();
    return 0;
}
void sum()
{
    float num2=2904,num1=2008,result;
    result=num2+num1;
    printf("Sum=%.2f\n",result);
}
void sub()
{
    float num2=2904,num1=2008,result;
    result=num2-num1;
    printf("Sub=%.2f\n",result);
}
void mul()
{
    float num1=2904,num2=2008,result;
    result=num1*num2;
    printf("mul=%.2f\n",result);
}
void Div()
{
    float num1=2904,num2=2008,result;
    result=num1/num2;
    printf("div=%.2f\n",result);
}
