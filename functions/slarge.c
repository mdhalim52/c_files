#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main()
{
    int length = get_int("Enter the length: ");

    if (length <= 0)
    {
        printf("Length is invalid");
        return 1;
    }
    

    int *num = malloc(length * sizeof(int));

    if (num == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    
    
    for (int i = 0; i < length; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    int largest = INT_MIN;
    int Second_largest = INT_MIN;

    for (int i = 0; i < length; i++)
    {
        if (num[i] > largest)
        {
            Second_largest = largest;
            largest = num[i];
        }
        else if (num[i] > Second_largest && num[i] != largest)
        {
            Second_largest = num[i];
        }
        
    }
    if (Second_largest == INT_MIN)
    {
        printf("No second largest number.\n");
    }
    else
    {
        printf("Second largest is %d\n", Second_largest);
    }

    free(num);
    
    return 0;
}