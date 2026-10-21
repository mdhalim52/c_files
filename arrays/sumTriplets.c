#include<stdio.h>
#include<stdlib.h>

int main()
{
    int total_triplets = 0;

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
            for (int k = i + j + 1; k < length; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    total_triplets++;
                    printf("(%d, %d, %d)\n", arr[i], arr[j], arr[k]);
                }
                
            }
            
        }
        
    }
    printf("Total Triplets: %d\n", total_triplets);

    free(arr);
    
    return 0;
}