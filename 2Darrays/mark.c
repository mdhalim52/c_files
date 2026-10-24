#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n][2];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &arr[i][0]);
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &arr[i][1]);   
    }

    printf("\nR.No\tMarks\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}