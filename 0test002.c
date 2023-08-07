#include <stdio.h>

struct person
{
    char name[30];
    int age;
    int marks;
};

int main()
{
    struct person *pointer , person1;
    pointer=&person1;
    printf("Enter the Name : ");
    gets(&pointer->name);
    printf(".\n");
    printf("Enter the Age : ");
    scanf("%d",&pointer->age);
    printf(".\n");
    printf("Enter the Marks : ");
    scanf("%d",&pointer->marks);
    printf(".\n\n");
    
    printf("Name : ");
    puts(pointer->name);
    printf("Age : %d\nMarks : %d\n",pointer->age,pointer->marks);

    return 0;

}