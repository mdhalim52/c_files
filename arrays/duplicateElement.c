#include<stdio.h>
#include<stdlib.h>

int main()
{
    int length;
    printf("Enter the length of array: ");
    if (scanf("%d", &length) != 1 || length <= 0)
    {
        printf("Invalid array length\n");
        return 1;
    }

    int* arr = malloc(length * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");


    /*int x;
    printf("Enter the number you want to find: ");
    scanf("%d", &x);

    int temp;
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (arr[i] == x)
        {
            count++;
            temp = arr[i];
        }
        
    }
    printf("%d is the duplicate element\n", temp);
    printf("The count: %d\n", count);*/

    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is duplicate\n", arr[i]);
                break;
            }
            
        }
        
    }
    
    
    free(arr);

    return 0;
}