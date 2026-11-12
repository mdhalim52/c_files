#include<stdio.h>
#include<string.h>
int main()
{
    char fname[15], mname[15], lname[15], fullname[30];

    printf("Enter your first name: ");
    scanf("%s", fname);
    printf("Enter your middle name: ");
    scanf("%s", mname);
    printf("Enter your last name: ");
    scanf("%s", lname);
    printf("\n");

    strcpy(fullname, fname);
    strcat(fullname, " ");
    strcat(fullname, mname);
    strcat(fullname, " ");
    strcat(fullname, lname);
    strcat(fullname, " ");

    printf("Full name: %s", fullname);

    return 0;
}