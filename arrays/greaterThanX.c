#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x, count = 0;
    printf("Enter the value of x: ");
    scanf("%d", &x);

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

    for (int i = 0; i < length; i++)
    {
        if (arr[i] > x || arr[i] == x)
        {
            count++;
        }
        
    }
    printf("Count: %d\n", count);

    free(arr);
    
    return 0;
}