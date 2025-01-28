#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    int check,n;
    char string[100];
    
    scanf("%s",string);
    n=strlen(string);

    check=true;
    for (int i = 0; i < n; i++)
    {
        if (string[i] != string[n-i-1])
        {
            check = false;
            break;
        }
    }
    if (check!=false)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}