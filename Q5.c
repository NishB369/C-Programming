/*If students score is in between 90-100 then they are graded A+
If students score is in between 80-89 then they are graded A
If students score is in between 70-79 then they are graded B+
If students score is in between 60-69 then they are graded B
If students score is in between 50-59 then they are graded C+
If students score is in between 40-49 then they are graded C
If students score is in below 39 then they are not qualified for the contest.
*/
#include<stdio.h>
int main()
{
    int scr;
    printf("Enter your Score:");
    scanf("%d",&scr);

    if (90<=scr && scr<=100)
    printf("Result : A+");
    else if (80<=scr && scr<=89)
    printf("Result : A");
    else if (70<=scr && scr<=79)
    printf("Result : B+");
    else if (60<=scr && scr<=69)
    printf("Result : B");
    else if (50<=scr && scr<=59)
    printf("Result : C+");
    else if (40<=scr && scr<=49)
    printf("Result : C");
    else
    printf("Sorry you are not qualified :\(\nBetter Luck Next Time!");
    return 0;
}