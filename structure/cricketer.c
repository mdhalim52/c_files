#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer
    {
        char name[20];
        int age;
        int test_matches;
        float average;
    }cricketer;
    
    cricketer arr[20];

    for (int i = 0; i < 20; i++)
    {
        printf("Enter the name of the cricketer: ");
        scanf("%[^\n]s", &arr[i].name);
        printf("Enter the age of the cricketer: ");
        scanf("%d", &arr[i].age);
        printf("Enter the number of the test matches: ");
        scanf("%d", &arr[i].test_matches);
        printf("Enter the average of the runs: ");
        scanf("%f", &arr[i].average);
        printf("\n");

    }

    for (int i = 0; i < 20; i++)
    {
        printf("Name of cricketer %d: %s\n", i + 1, arr[i].name);
        printf("Age of the cricketer %d: %d\n", i + 1, arr[i].age);
        printf("Number of the test matches of criketer %d: %d\n", i + 1, arr[i].test_matches);
        printf("Average of runs of cricketer %d: %f", i + 1, arr[i].average);
        printf("\n");
    }
    
    return 0;
}