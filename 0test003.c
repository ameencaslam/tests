#include <stdio.h>

int add(int a,int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}

int main()
{
    int a,b,result;
    int *pa,*pb;

    pa=&a;
    pb=&b;

    printf("Enter a: ");
    scanf("%d",pa);

    printf("Enter b: ");
    scanf("%d",pb);

    result=add(*pa,*pb);

    printf("%d + %d = %d",*pa,*pb,result);

    return 0;
}