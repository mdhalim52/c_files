#include<stdio.h>

int main()
{
    char name[50], fvrt_sub[50];
    int roll;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your favourite subject name: ");
    fgets(fvrt_sub, sizeof(fvrt_sub), stdin);
    printf("Enter your roll: ");
    scanf("%d", &roll);
    printf("\n");

    printf("Name: %s\n"
           "Favourite sub: %s\n" 
           "Roll: %d\n", 
           name, fvrt_sub, roll);
    return 0;
}