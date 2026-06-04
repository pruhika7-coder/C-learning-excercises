#include<stdio.h>
int main()
{
    int i,j,row,col;
    int seats[5][5]={0};
    printf("Welcome to the Movie ticket reservation~\n\n");
    printf("\nThe seats are indexed from 0-4\n");
    printf("\nEnter -1 for the row at any time to exit,Thank you\n");
    while(1)
    {
        printf("\nEnter row number from (0-4): ");
        if(scanf("%d",&row)!=1)
        {
            printf("Invalid row number!\n");
            while(getchar()!='\n')
            continue;
        }
        if(row==-1)
        {
         printf("Exiting,Thank you~\n");
         break;
        }
        printf("Enter a column number from (0-4): ");
        if(scanf("%d",&col)!=1)
        {
            printf("Invalid column number!\n");
            while(getchar()!='\n')
            continue;
        }
        if(row<0||row>4||col<0||col>4)
        {
            printf("INVALID OPTIONS!!!, please choose between (0-4)\n");
            continue;
        }
        if(seats[row][col]==0)
        {  seats[row][col]=1;
            printf("Your seat is booked successfully:)\n");
        }
        else
        {
            printf("Sorry, this seat is booked!, choose other seats\n");
        }
        printf("-THE FINAL SEATING ARRANGEMENT-\n");
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%d",seats[i][j]);
            }
            printf("\n");
        }
    }
    
    
}
