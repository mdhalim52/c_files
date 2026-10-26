#include<stdio.h>
#include<limits.h>

int input(int rows, int cols, int arr[rows][cols]);
int maximum_value(int rows, int cols, int arr[rows][cols]);

int main()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int a[n][m];
    input(n, m, a);

    maximum_value(n, m, a);
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

int maximum_value(int rows, int cols, int arr[rows][cols])
{   
    int max = INT_MIN;
    int max_row = 0;
    int max_col = 0;
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];

                max_row = i;
                max_col = j;
            }
            
        }
        printf("\n");
          
    }

    printf("maximum value is arr[%d][%d]: %d", max_row, max_col, max);

    return max;
    
}