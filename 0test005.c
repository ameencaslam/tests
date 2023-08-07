#include <stdio.h>

long int addnum(int n)
{
    if(n>=1)
    {
        return n*addnum(n-1);
    }
    else
    {
        return 1;
    }
}

void main()
{
    int n;
    long int result;
    printf("Enter N for n! : ");
    scanf("%d",&n);
    result=addnum(n);
    printf("%d! = %ld",n,result);
}