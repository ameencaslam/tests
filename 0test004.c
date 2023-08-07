#include <stdio.h>

int swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main()
{
    int a,b,result;

    printf("Enter a: ");
    scanf("%d",&a);

    printf("Enter b: ");
    scanf("%d",&b);

    printf("\nBefore swap : a= %d , b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap : a= %d , b=%d\n",a,b);
}