#include<stdio.h>
int main()
{
    int n,digits;
    digits=0;
    scanf("%d",&n);
    int temp = n;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    printf("%d",digits);
    return 0;
}