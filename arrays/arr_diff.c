#include<stdio.h>
#include<stdlib.h>
int main()
{
    int length, sum_odd = 0, sum_even = 0;
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
        if ((i + 1) % 2 == 0)
        {
            sum_even += arr[i];
        }
        else
        {
            sum_odd += arr[i];
        }
        
    }
    printf("Difference: %d\n", sum_even - sum_odd);

    free(arr);
    
    return 0;
}