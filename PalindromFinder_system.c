#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    char str[100];
    int left,right;
    bool ispalin=true;
    printf("Enter a word: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    left=0;
    right=strlen(str)-1;
    while(left<right)
    {
        if(str[left]!=str[right])
        {
            ispalin=false;
            break;
        }
        left++;
        right--;
    }
    if(ispalin)
    {
        printf(" %s is a palindrome word",str);
    }
    else
    {
        printf(" %s is not a palindrome word",str);
    }
}
