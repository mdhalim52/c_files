#include<stdio.h>

int input(int rows, int cols, int arr[rows][cols]);
int main()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    
    printf("-----------first matrix-------------\n");
    int a[n][m];
    input(n, m, a);

    printf("-----------second matrix-------------\n");
    int b[n][m];
    input(n, m, b);

    int c[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
        
    }

    printf("-----------result matrix-------------\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
        
    }
    

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

