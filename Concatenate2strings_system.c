#include<stdio.h>
#include<string.h>
int main()
{
    char str[40],str2[20];
    
    puts("Enter string no.1 ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")]='\0';
    printf("Enter string no.2 \n");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2, "\n")]='\0';
    strcat(str,str2);
    printf("%s",str);
    return 0;
}
