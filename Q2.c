#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the value of y:");
    scanf("%d",&y);
    if (y>0)
    {
        x=1;
        printf("%d assigned to y is greater than 0\n",y);
        printf("--> Value assigned to x :%d",x);
    }
    else
    printf("%d assigned to y is not greater than 0\n",y);
    printf("--> No Value is assigned to x");
    return 0;
}