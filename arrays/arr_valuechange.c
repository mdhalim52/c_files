#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length;
    printf("Enter the value of array: ");
    scanf("%d", &length);

    int *arr = malloc(length * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 1; i <= length; i++)
    {
        printf("Enter the value %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    for (int i = 1; i <= length; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += 10;
        }
        else
        {
            arr[i] *= 2;
        }
    }

    for (int i = 1; i <= length; i++)
    {
        printf("array element %d: %d\n", i, arr[i]);
    }
    printf("\n");

    free(arr);
    
    return 0;
}