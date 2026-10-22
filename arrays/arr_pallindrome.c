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


    int pallindrome = 1;
    int i;
    int j = length - 1;

    for (int i = 0; i <= j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            pallindrome = 0;
            break;
        }
        
    }

    if (pallindrome)
    {
        printf("Pallindrome\n");
    }
    else
    {
        printf("Not pallindrome\n");
    }
    
    
    free(arr);
    
    return 0;
}