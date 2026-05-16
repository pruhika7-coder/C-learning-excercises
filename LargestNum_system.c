int i,n,current,max;
    printf("Enter how many numbers u want\n");
    scanf("%d",&n);
    printf("Enter 1st digit:");
    scanf("%d",&max);
    for(i=2;i<=n;i++)
    {
        printf("Enter digit %d",i);
        scanf("%d",&current);
    
        if(current>max)
        {
        max=current;
        }
    }
    printf("\nThe largest number is%d",max);
    return 0;
    
