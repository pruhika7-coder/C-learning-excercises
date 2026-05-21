#include<stdio.h>
int main()
{
    int i,j,size=7;
    int a[]={1,3,3,3,9,29,4};
    int us=0,isdup;
    for(i=0;i<size;i++)
    {
        int isdup=0;
    
    for(j=0;j<us;j++)
    {
        if(a[i]==a[j])
        {
            isdup=1;
            break;
        }
    
    }
  
    if(!isdup)
    {
        a[us]=a[i];
        us++;
        
    }
    }
    printf("Unique Elements:");
    for(i=0;i<us;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
