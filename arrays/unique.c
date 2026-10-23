#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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


    for (int i = 0; i < length; i++)
    {
        bool flag = false;

        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
            
        }
        if (flag == false)
        {
            printf("Unique value: %d\n", arr[i]);
            break;
        }
        
    }
    
    
    free(arr);

    return 0;
}