#include<stdio.h>
int main()
{
    int i,j,n=3;
    int a[3][3]={ {29,4,8},
                {17,12,10},
                {1,2,3}
               };
    int maind=0,antid=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                maind+=a[i][j];
            }
            if(j==n-1-i)
            {
                antid+=a[i][j];
            }
        }
    }
    printf("The main diagonal sum is : %d\n",maind);
    printf("The anti main diagonal sum is : %d\n",antid);
    int totalsum=antid+maind;
    if(n%2!=0)
    {
        totalsum-=a[n / 2][n / 2];
    }
    printf("\nThe total sum of both diagonals is %d",totalsum);
}
