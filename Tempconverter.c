#include<stdio.h>
float tempconverter(float celsius)
{
    float result,far;
    far=(celsius*1.8)+32;
    return far;
}
int main()
{
    float celsius,result;
    printf("Enter the temperature in celsius:");
    scanf("%f",&celsius);
    float tempconverter(float celsius);
    result=tempconverter( celsius);
    printf("The converted temp:%0.2f",result);
}
