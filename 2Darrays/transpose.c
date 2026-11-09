#include<stdio.h>

int input(int rows, int cols, int arr[rows][cols]);
int transpose_output(int rows, int cols, int arr[rows][cols]);

int main()
{
    int n, m;
    printf("Enter the rows of the array: ");
    scanf("%d", &n);
    printf("Enter the columns of the array: ");
    scanf("%d", &m);

    int a[n][m];

    input(n, m, a);
    
    transpose_output(m, n, a);

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


int transpose_output(int rows, int cols, int arr[rows][cols])
{
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
        
    }

    return 0;
    
}



/*int transpose_matrix(int rows, int cols, int arr[rows][cols], int num[rows][cols])
{


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            num[j][i] = arr[i][j];
        }
        printf("\n");
        
    }

    return 0;
}
*/


