#include<stdio.h>
int main()
{
    int n,remainder;
    scanf("%d",&n);
    while (n!=0)
    {
        int remainder=n%10;
        n=n/10;
        printf("%d",remainder);
    }
    return 0;
}