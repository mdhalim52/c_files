#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, target = 8;

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("found");
            }
            else if (arr[i] + arr[j] > target)
            {
                j--;
            }
            else if (arr[i] + arr[j] < target)
            {
                i++;
            }
        }
    }
    
    return 0;
}