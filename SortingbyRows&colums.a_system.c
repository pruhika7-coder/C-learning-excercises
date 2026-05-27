#include<stdio.h>
int main()
{
    int i,j,k;
    int a[3][3]={ {9,2,8},
                  {3,1,4},
                  {5,7,6} };
                  int temp;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3-1;j++)
        {
            for(k=0;k<3-i-1;k++)
            {
                if(a[i][k]>a[i][k+1])
                {
                    temp=a[i][k];
                    a[i][k]=a[i][k+1];
                    a[i][k+1]=temp;
                }
            }
        }
    }
    
    for(j=0;j<3;j++)
    {
        for(i=0;i<3-1;i++)
        {
            for(k=0;k<3-i-1;k++)
            {
                if(a[k][j]>a[k-1][j])
                {
                    temp=a[k][j];
                    a[k][j]=a[k+1][j];
                    a[k+1][j]=temp;
                }
            }
        }
    }
    
    printf("The sorted matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
