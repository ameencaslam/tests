// array append

#include <stdio.h>

void main()
{
    int i,ar1[5],ar2[5],ar3[10];
    
    printf("Enter 5 elements for Array 1: ");
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar1[i]);
        ar3[i]=ar1[i];
    }

    printf("Enter 5 elements for Array 2: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar2[i]);
        ar3[i+5]=ar2[i];
    }

    printf("Appended Array: ");
    for(i=0;i<10;i++)
    {
        printf("%d ",ar3[i]);
    }
}