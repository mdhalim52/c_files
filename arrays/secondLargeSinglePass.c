#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

    int max = INT_MIN;
    int smax = INT_MIN;

    for (int i = 0; i < length; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if(smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
        
    }
    printf("Second max: %d\n", smax);

    free(arr);

    return 0;
}