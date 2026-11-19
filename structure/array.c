#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct book
    {
        char name[50];
        int price;
        int page;
    }book;

    book arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the book name of %d: ", i + 1);
        scanf("%s", &arr[i].name);
        printf("Enter the price of book %d: ", i + 1);
        scanf("%d", &arr[i].price);
        printf("Enter how many page in the book %d: ", i + 1);
        scanf("%d", &arr[i].page);
        printf("\n");
    }
    
    for (int i = 0; i < 3; i++)
    {
        printf("Book name of %d: %s\n", i + 1, arr[i].name);
        printf("Price of book %d: %d\n", i + 1, arr[i].price);
        printf("Page of book %d: %d\n", i + 1, arr[i].page);
        printf("\n");
    }
    
    
    return 0;
}