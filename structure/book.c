#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[50];
        int price;
        int page;
    }a, b, c;

    strcpy(a.name, "Calculus");
    a.price = 300;
    a.page = 500;

    printf("%s\n", a.name);
    printf("%d\n", a.price);
    printf("%d\n", a.page);
    
    return 0;
}