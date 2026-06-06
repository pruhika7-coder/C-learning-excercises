#include<stdio.h>
int main()
{
    int weather[2][3][2]= 
    {
                          { 
                              {20,25},
                              {22,24},
                              {19,23}
                          },
                          {
                              {30,35},
                              {32,36},
                              {31,34}
                          }
    };
    int city,day;
    for(city=0;city<2;city++)
    {
        printf("---city:%d---",city);
        
    
        for(day=0;day<3;day++)
        {
            printf("\n day:%d\n--->morning : %d , night %d \n",day, weather[city][day][0],weather[city][day][1]);
        }
    }
}
