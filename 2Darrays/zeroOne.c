#include<stdio.h>
#include<limits.h>

int input(int rows, int cols, int arr[rows][cols]);
int max_count(int rows, int cols, int arr[rows][cols]);

int main()
{
    int n, m;
    printf("Enter the rows of the array: ");
    scanf("%d", &n);
    printf("Enter the columns of the array: ");
    scanf("%d", &m);

    int a[n][m];

    input(n, m, a);

    max_count(n, m, a);

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


int max_count(int rows, int cols, int arr[rows][cols])
{
    int maxCountRow = 0;
    int maxCount = 1;
    for (int i = 0; i < rows; i++)
    {
        int count = 0;
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
            
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxCountRow = i;
        }
        
        
    }

    printf("Row with maximum one(%d): %d\n", maxCount, maxCountRow);


    return 0;
    
}