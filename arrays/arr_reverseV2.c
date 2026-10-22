//Reverse an array without using an extra array.

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

    int i = 0, j = length - 1 - i;
    while (i <= j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    
    for (int i = 0; i < length; i++)
    {
        printf("arr[%d]: %d\n", i + 1, arr[i]);
    }
    
    free(arr);
    
    return 0;
}