//Leap Year
#include<stdio.h>
int main()
{
    int yr;
    printf("Enter your Birth Year:");
    scanf("%d",&yr);
    if (yr%100==0 && yr%400==0)
    printf("Your Birth Year %d is a Leap Year",yr);
    else if (yr%4==0) 
    printf("Your Birth Year %d is a Leap Year",yr); 
    else
    printf("Your Birth Year %d is not a Leap Year",yr);
    return 0;
}