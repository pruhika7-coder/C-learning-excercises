#include<stdio.h>
int main()
{
    int supercount=0,i;
    int health[]={29,4,8,90,67};
    for(i=0;i<=4;i++)
    {
        if(health[i]>=50)
        {
            supercount++;
        }
    }
    printf("Total supercount packs are %d",supercount);
    return 0;
}
