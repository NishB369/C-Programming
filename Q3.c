//To check whether a number is divisible by 3 and 5
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n%3==0 && n%5==0)
    printf("%d is divisible by both 3 and 5.",n);
    else
    {
        if (n%3==0)
        printf("%d is divisible only by 3.",n);
        else
        printf("%d is divisible only by 5.",n);
    }
    return 0;
}