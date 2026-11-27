#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    int temp;

    for (int i = 1; i <= n - 1; i++)
    {
        int j = i;
        while (j >= 0 && arr[j] < arr[j - 1])
        {
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}