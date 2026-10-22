#include<stdio.h>
#include<stdlib.h>

int input(int arr[], int length);
int output(int arr[], int length);
int part_reverse(int arr[], int start_index, int end_index);
int full_reverse(int arr[], int length);

int main()
{
    int k;
    printf("How many times the array rotate: ");
    if (scanf("%d", &k) != 1)
    {
        return 1;
    }

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

    k = k % length;

    input(arr, length);

    output(arr, length);
    
    full_reverse(arr, length);

    part_reverse(arr, 0, k - 1);

    part_reverse(arr, k, length - 1);

    for (int i = 0; i < length; i++)
    {
        printf("rotate array element %d: %d\n", i+1, arr[i]);
    }
 
    free(arr);
    
    return 0;
}

int input(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Enter the value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    return 0;
}


int output(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }
    printf("\n");

    return 0;
}


int full_reverse(int arr[], int length)
{
    part_reverse(arr, 0, length - 1);

    return 0;
}


int part_reverse(int arr[], int start_index, int end_index)
{
    for (int i = start_index, j = end_index; i < j; i++, j--)    
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    return 0;
    
}