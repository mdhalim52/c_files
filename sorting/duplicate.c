#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int arr[7] = {3, 4, 5, 2, 6, 7, 4}, duplicate = 0, findex = 0, lindex = 0;

    int n = sizeof(arr)/ sizeof(int);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])   
            {
                duplicate = arr[i];
                findex = i;
                lindex = j;
                break;
            }
            
        }
        
        
    }
    printf("duplicate element is %d\n", duplicate);
    printf("and it's index is %d and %d\n", findex, lindex);

    return 0;
}