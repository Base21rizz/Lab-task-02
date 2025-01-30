#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp,digits=0,sum=0;
    scanf("%d",&num);
    temp = num;
    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }
    int arr[digits];

    temp = num;
    for (int i = digits - 1; i >= 0; i--)
    {
        arr[i]=temp % 10;
        temp /= 10;
    }

    for (int i = 0; i < digits; i++)
    {
        sum += pow(arr[i],digits);
    }
    if (sum == num)
    {
        printf("Armstrong Number\n");
    }
    else if(sum != num)
    {
        printf("Not Armstrong Number\n");
    }
    return 0;  
}
