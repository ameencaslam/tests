#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    FILE *ptr;
    ptr=fopen("C:\Users\5757\Desktop\C Lab\file.txt","w");

    if(ptr==NULL)
    {
        printf("Error");
        exit(1);
    }
    
    printf("Enter num : ");
    scanf("%d",&num);

    fprintf(ptr,"%d",num);
    fclose(ptr);
}