#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool is_palindrome(char string[]);

int main()
{
    
    return 0;
}

//user defined function for check palindrome
bool is_palindrome(char string[])
{
    int len = strlen(string);
    int middle = len / 2;

    for (int  i = 0; i < middle; i++)
    {
        if (string[i] = string[len - i - 1])
        {
            return false;
        }
        return true;
        
    }
    
}