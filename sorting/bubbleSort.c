#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[] = {2, 4, 1, 5, 8, 3, 9, 7, 6};
    int n = sizeof(arr)/sizeof(int);
    int temp;

   
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;

        for (int j = 0; j < n - i - 1; j++)
        {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    flag = true;
                }   
                
        }
        if (flag == false)
        {
            break;
        }
        
        
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}