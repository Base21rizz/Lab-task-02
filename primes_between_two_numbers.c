#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main()
{
    long long int a,b,n;
    bool  prime;
    prime = true;
    scanf("%lld %lld",&a,&b);
    for (n = a + 1; n <= b; n++)
    {
        prime = true;
        for (int j = 2; j < n; j++)
        {
            if (n%j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime == true)
        {
            printf("%lld ", n);
        }
    }
    return 0;
}