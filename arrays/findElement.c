#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length;
    printf("Enter the length of array: ");
    if (scanf("%d", &length) != 1 || length <= 0)
    {
        printf("Invalid array length\n");
        return 1;
    }

    int* arr = malloc(length * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");


    int x;
    printf("Enter the number you want to find: ");
    scanf("%d", &x);

    int temp;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == x)
        {
            printf("%d is present in the array and it's index is %d\n", x, i + 1);
            break;
        }
        
    }
    //printf("The value: %d\n", temp);
    
    free(arr);

    return 0;
}