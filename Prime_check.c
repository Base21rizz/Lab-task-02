#include<stdio.h>
#include<stdbool.h>
int main()
{
    long long int n,prime;
    prime = true;
    scanf("%lld",&n);
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            prime=false;
            break;
        }
    }
    if (prime==true)
    {
        printf("Prime");
    }
    else if(prime==false)
    {
        printf("Not Prime");
    }
    return 0;
}