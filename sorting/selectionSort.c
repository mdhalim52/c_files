#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<limits.h>

int main()
{
    int arr[] = {2, 3, 18, 45, 23, 1, 8, 5};
    int n = sizeof(arr)/sizeof(int);

    printf("============unsorted array============\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //selelction sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j <= n - 1; j++)
        {
            if (min >= arr[j])
            {
                min = arr[j];
                minidx = j;
            }
            
        }
        //swap the min value with first element of unsorted array
        //swap minidx and i
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
        
    }
    
    printf("============sorted array=============\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}