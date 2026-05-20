#include<stdio.h>
int main()
{
  int i,n,d[10];
  printf("Enter number of elements(1-10) u want in a array\n");
  scanf("%d",&n);
  printf("Enter the elements:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&d[i]);
  }
  printf("The original array:\n");
  for(i=0;i<n;i++)
  {printf(" %d",d[i]);
  }
  printf("\nThe reverse array:\n");
  for(i=n-1;i>=0;i--)
  {
      printf(" %d",d[i]);
  }
}
