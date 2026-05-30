#include <stdio.h>

int main()
{
    int i,j,target;
    int a[3][3]={ {29, 8, 4},
                  {29, 58, 67},
                  {56, 67, 29} };
    int found=0;
    printf("The given matrix is:\n ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the number you want to search and replace with 0:");
    scanf("%d",&target);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]==target)
            {
                printf("The number %d is found in row %d, column %d\n",target,i+1,j+1);
                a[i][j]=0;
                found=1;
                
            }
        }
    }
    if(!found)
    {
        printf("The number %d is not found in this matrix");
    }
    printf("The updated matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
