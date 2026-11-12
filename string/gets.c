#include<stdio.h>
#include<string.h>
int main ()
{
    char str[50];

    //scanf("%s", str);
    //printf("your input was: %s", str);
    fgets(str, sizeof(str), stdin);
    printf("Your input was: %s", str);
    
    return 0;
}