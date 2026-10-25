#include<stdio.h>

int input(int rows, int cols, int arr[rows][cols]);
int sum_of_elements(int rows, int cols, int arr[rows][cols]);

int main()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int a[n][m];
    input(n, m, a);

    sum_of_elements(n, m, a);
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

int sum_of_elements(int rows, int cols, int arr[rows][cols])
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        printf("\n");
    } 
    printf("sum of elements: %d", sum);

    return sum;
}