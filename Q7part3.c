/*Series1
101+202+303+404+505+606+-------n
*/
#include<stdio.h>
int main()
{
    int n,b=101,sum=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    if (n<=1000)
    {
        for (int i=1; i<=n; i++)
        {
            printf("%d ",b);
            sum+=b;
            b+=100;
            
        }
        printf("\nSum : %d",sum);
    }
    else
    printf("Value of n should not be more than 3 digits");
    return 0;
}