#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[10] = {6, 5, 3, 2, 1, 7, 9, 9, 10, 4};
    int n = sizeof(arr) / sizeof(int);

    bool brr[10] = {false};

    for (int i = 0; i < n; i++)
    {
        if (brr[i])
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Duplicate: %d\n", arr[i]);
                brr[j] = true;
            }
        }
    }
}