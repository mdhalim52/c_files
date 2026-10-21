#include<stdio.h>
#include<stdlib.h>

int main()
{
    int totalPairs = 0;

    int x;
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
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] + arr [j] == x)
            {
                totalPairs++;
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
            
        }
        
    }
    printf("Total pairs: %d\n", totalPairs);

    free(arr);
    
    return 0;
}