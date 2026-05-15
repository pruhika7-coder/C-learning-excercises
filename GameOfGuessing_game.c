#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   srand(time(0));
    int attempt=0,guess;
    int num=(rand()%100+1);
    printf("~WELCOME TO THE GAME!~\n\n");
    printf("I am thinking of a number between 1-100\n\n");
    do
    {
    printf("Enter the number you're guessing\n\n");
    scanf("%d",&guess);
  
    if(guess>num)
    
    {    attempt++;
        printf("Try lower number:)\n\n");
    }
    else if(guess<num)
    {   attempt++;
        printf("Try higher number:)\n\n");
    }
    else
    {   attempt++;
        printf("Congratulations, you've got it in %d attempts",attempt);
    }
    }while(guess!=num);

