#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length;
    printf("Enter the length of array: ");
    scanf("%d", &length);

    int* arr = malloc(length * sizeof(int));
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


    int num[length];
    for (int i = 0; i < length; i++)
    {
        num[i] = arr[length - i - 1];
    }

    for (int i = 0; i < length; i++)
    {
        printf("num[%d]: %d\n", i+1, num[i]);
    }
    
    free(arr);
    
    
    
    return 0;
}