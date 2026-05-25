#include<stdio.h>
int main()
{
    int n=3;
    int a[3][3]={ {17,12,10},
                  {29,4,8},
                  {12,9,24}
                 }; 
    int min=a[0][0];
    int max=a[0][0];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }
    printf("The maximum element is: %d ",max);
    printf("The minimum element is: %d",min);
}
