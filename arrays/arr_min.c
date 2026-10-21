#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length; 
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

    int min = arr[0];
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }   
    }
    printf("min: %d\n", min);
    
    free(arr);
    
    return 0;
}