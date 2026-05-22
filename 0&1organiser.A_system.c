#include<stdio.h>
int main()
{   int i, temp;
    int a[]={1,0,0,1,1,1,0,0,0,1,0};
    int size=sizeof(a)/sizeof(a[0]);
     int left=0,right=size-1;
    
    printf("The original array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    while(left<right)
    {
        if(a[left]==0)
        {
            left++;
        }
        else if(a[right]==1)
        {
            right--;
        }
        else
        {
            temp=a[left];
            a[left]=a[right];
            a[right]=temp;
            right--;
            left ++;
        }
    }
    printf("The segregated array is:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
