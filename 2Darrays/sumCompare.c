#include<stdio.h>
#include<limits.h>

int input(int rows, int cols, int arr[rows][cols]);
int row_sum(int rows, int cols, int arr[rows][cols]);

int main()
{
    int n, m;
    printf("Enter the rows of the array: ");
    scanf("%d", &n);
    printf("Enter the columns of the array: ");
    scanf("%d", &m);

    int a[n][m];

    input(n, m, a);

    row_sum(n, m, a);

    return 0;
}

int input(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    
}

int row_sum(int rows, int cols, int arr[rows][cols])
{
    int maxSum = INT_MIN;
    int maxSumRow = 0;

    for (int i = 0; i < rows; i++)
    {

        int sum = 0;

        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];

            if (sum > maxSum)
            {
                maxSum = sum;
                maxSumRow = i;
            }
            
        }
        
    }

    printf("Row with maximum sum %d: %d\n", maxSum, maxSumRow);

    return 0;
}