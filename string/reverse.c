#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{   int size;
    puts("Enter the size: ");
    scanf("%d", &size);
    getchar();

    char *str = malloc(sizeof(char) * (size + 1));

    printf("Enter your string: ");
    fgets(str, size+1, stdin);

    for (int i = 0, j = strlen(str)-1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string is: %s", str);
    
    free(str);

    return 0;
}