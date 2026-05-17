
#include<stdio.h>
int main()
{
    int i,n,a[10];
    float sum=0,avg;
    printf("Enter no of elements:");
    scanf("%d",&n);
    printf("\nEnter elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("\nThe sum of elements is %.1f",sum);
    printf("\nThe average of elements is %.2f",avg);
}
