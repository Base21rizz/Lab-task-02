#include<stdio.h>
void decimaltobinary(int num)
{
    int result = 0;
    int place = 1;

    while (num>0)
    {
        int remainder = num%2;
        result += remainder*place;
        place *= 10;
        num=num/2;
    }
    
    printf("%d",result);
}
int main()
{
    int decimal;
    scanf("%d",&decimal);
    decimaltobinary(decimal);
    return 0;
}