#include <stdio.h>

int main()
{
    float a,b;
    float *ptra=&a,*ptrb=&b;
    

    printf("Enter a : ");
    scanf("%f",&a);

    printf("Enter b : ");
    scanf("%f",&b);
    
    printf("===============\n");
    
    printf("Addition = %.2f\n",(*ptra + *ptrb));
    printf("Substraction = %.2f\n",(*ptra - *ptrb));
    printf("Multiplication = %.2f\n",(*ptra * *ptrb));
    printf("Divition = %.2f\n",(*ptra / *ptrb));


    return 0;
}
