#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct person
    {
        char name[20];
        int salary;
        int age;

    }person;
    
    person a, b;
    
    strcpy(a.name, "Halim");
    a.salary = 30000;
    a.age = 25;

    strcpy(b.name, "Farazi");
    b.salary = 50000;
    b.age = 30;

    printf("%s\n", a.name);
    printf("%d", b.age);

    return 0;
}