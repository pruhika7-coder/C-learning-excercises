#include<stdio.h>
int main()
{
    int a[10];
    int n,i,even=0,odd=0;
    printf("Enter number of elements of array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("The number of even nums in given array is %d\n",even);
    printf("The number of odd nums in given array is %d",odd);
}
