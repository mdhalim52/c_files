#include<stdio.h>
int main ()
{
    char ch[] = "Hello ami md abdul halim farazi";
    int i = 0;

    while (ch[i] != '\0')
    {
        printf("%c", ch[i]);
        i++;
    }
    
    return 0;
}