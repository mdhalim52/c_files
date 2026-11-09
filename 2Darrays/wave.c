#include<stdio.h>

int main()
{
    int n, m;
    printf("Enter the rows of matrix: ");
    scanf("%d", &n);
    printf("Enter the columns of matrix: ");
    scanf("%d", &m);

    printf("\n");

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("\n");


    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
            
        }
        else
        {
            for (int j = m - 1; j >= 0; j--)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
                   
        }
        
    }
    
    
    return 0;
}