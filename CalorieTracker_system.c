#include<stdio.h>
int main()
{
    int calorie,calorietaken,calorieburnt,netc;
    printf("~-WELCOME TO DIGITAL CALORIE TRACKER-~  \n");
    printf("\nThis tracker allows you to keep a track on calories!!\n");
    printf("\nEnter Target calories: ");
    scanf("%d",&calorie);
    printf("\n Enter calories taken today: ");
    scanf("%d",&calorietaken);
    printf("\n Enter calories burnt(exercise or yoga): ");
    scanf("%d",&calorieburnt);
    netc= calorietaken - calorieburnt;
    printf("-----TODAY'S CALORIE TRACK-----\n");
    printf("CALORIES INTAKE:%d \nCALORIES BURNT:%d \nNET CALORIES:%d",calorietaken,calorieburnt,netc);
    printf("\nDear user~, please take 2 to 3.7 liters of water everyday,and stay hydrated");
    printf("\nTHANK YOU~!");
}
