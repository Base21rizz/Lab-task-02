#include<stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);
    ans=gcd(a,b);
    printf("%d",ans);
    return 0;
}