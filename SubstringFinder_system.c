#include<stdio.h>
int main()
{
    char mainstr[100];
    char substr[50];
    int i=0,j=0;
    int found=0;
    printf("Enter Main string:");
    scanf("%[^\n]",mainstr);
    char dummy;
    scanf("%c");
    printf("Enter The substring to search for: ");
    scanf("%[^\n]",substr);
    while(mainstr[i]!='\0')
    {  j=0;
        while(substr[j]!='\0'&&mainstr[i+j]!='0'&&mainstr[i+j]==substr[j])
        {
            j++;
        }
        if(substr[j]=='\0')
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("Congrats! you found the string");
    }
    else
    {
        printf("Try again!");
    }
}
