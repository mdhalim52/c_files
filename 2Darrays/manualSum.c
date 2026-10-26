#include<stdio.h>

int input(int rows, int cols, int arr[rows][cols]);
int sum_of_manual_elements(int rows, int cols, int arr[rows][cols]);

int main()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int a[n][m];
    input(n, m, a);

    sum_of_manual_elements(n, m, a);
    printf("\n");
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
    return 0;  
}

int sum_of_manual_elements(int rows, int cols, int arr[rows][cols])
{
    int start_rows, start_cols, end_rows, end_cols;
    printf("Enter the starting coordinates (row, column): ");
    scanf("%d %d", &start_rows, &start_cols);
    printf("Enter the ending coordinates (row, column): ");
    scanf("%d %d", &end_rows, &end_cols);

    int sum = 0;
    for (int i = start_rows; i <= end_rows; i++)
    {
        for (int j = start_cols; j <= end_cols; j++)
        {
            sum += arr[i][j];
        }
        
    } 
    printf("sum of elements: %d", sum);

    return sum;
}