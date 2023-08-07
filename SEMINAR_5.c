// c program for addiition and substraction of matrices
#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("clear");

    int row,col,i,j,temp1,temp2;

    printf("Enter the number of rows and columns of the matrices\n\nEnter the number of Rows: ");
    scanf("%d",&row);
    printf("Enter the number of Columns: ");
    scanf("%d",&col);

    temp1=row*col;

    int mat1[temp1],mat2[temp1];

    printf("\n\nEnter the contents of the First Matrix:-\n");
    for(i=1;i<=row;i++)
    {
        printf("Enter contents of row %d : ",i);
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat1[j]);
        }
    }

    printf("\n\nEnter the contents of the Second Matrix:-\n");
    for(i=1;i<=row;i++)
    {
        printf("Enter contents of row %d : ",i);
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat2[j]);
        }
    }
    
    
    
    
    printf("\n\nmat1= ");
    for(i=0;i<=temp1;i++)
    {
        printf("%d ",mat1[i]);
    }
    printf("\n\nmat2= ");
    for(i=0;i<=temp1;i++)
    {
        printf("%d ",mat2[i]);
    }
    
    
    
    
    printf("\n\nSum=\n\n");
    for(i=1;i<=row;i++)
    {
        for(j=0;j<col;j++)
        {
            temp2=mat1[j]+mat2[j];
            printf("%d\t",temp2);
        }
        printf("\n");
    }
}