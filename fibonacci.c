#include<stdio.h>
int main()
{
    int n,a,b,next;
    a=0;
    b=1;
    next=0;
    scanf("%d",&n);
    if (n == 0)
    {
        printf("Null");
    }
    else if (n == 1)
    {
        printf ("0");
    }
    else
    {
        printf("0 1");
        for (int i = 0; i < n-2; i++)
        {
        next = a+b;
        a = b;
        b = next;
        printf(" %d",next);
        }
    }
    return 0;
}
