#include<stdio.h>
void input(int rows, int cols, int arr[rows][cols]);
void multiply(int rows, int cols, int arr[rows][cols], int brr[rows][cols], int result[rows][cols]);
void output(int rows, int cols, int arr[rows][cols]);
int main()
{
    int n, m;
    printf("Enter the rows of matrix: ");
    scanf("%d", &n);
    printf("Enter the columns of matrix: ");
    scanf("%d", &m);

    printf("\n");

    int a[n][m];
    int b[n][m];
    int c[n][m];

    printf("Enter elements of first matrix:\n");
    input(n, m, a);
    printf("\n");

    printf("Enter elements of second matrix:\n");
    input(n, m, b);
    printf("\n");

    multiply(n, m, a, b, c);

    printf("Result of multiplication of matrix:\n");
    output(n, m, c);

    
    return 0;
}

void input(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
        
    }
    
}

void multiply(int rows, int cols, int arr[rows][cols], int brr[rows][cols], int result[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < cols; k++)
            {
                result[i][j] += arr[i][k] * brr[k][j];
            }
            
        }
        
    }
    
}

void output(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }
    
}