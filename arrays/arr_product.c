#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length, product = 1;
    printf("Enter the length of array: ");
    scanf("%d", &length);

    int *arr = malloc(length * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for (int i = 0; i < length; i++)
    {
        product *= arr[i];
    }
    printf("Product of array: %d\n", product);

    free(arr);
    
    return 0;
}