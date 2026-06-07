#include<stdio.h>

int main()
{
    char str[50], str2[50];
    puts("Enter string no.1");
    fgets(str,sizeof(str),stdin);
    puts("Enter string no.2");
    fgets(str2,sizeof(str2),stdin);
    if(strcmp(str,str2)==0)
    {
        printf("The strings are equal!!!");
    }
    else
    {
        printf("The strings are not equal!!!");
    }
}
