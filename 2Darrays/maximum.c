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

    int largest = maximum_value(n, m, a);
    printf("Maximum value: %d", largest);
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
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            
        }
        printf("\n");
          
    }

    return max;
    
}