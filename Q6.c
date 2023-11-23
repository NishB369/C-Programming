/*Booking Price 20000Rs-Card ‘A’ —--------------------------->VVIP
  Booking Price 10000Rs-Card ‘B’------------------------------->VIP
  Booking Price 5000Rs-Card ‘C’--------------------------------->Special County
  Booking Price 2000Rs-Card ‘D’--------------------------------->General County
*/
#include<stdio.h>
int main()
{
    int p; 
    char cd;
    printf("Enter your Booking Price and Card Letter:");
    scanf("%d %c",&p,&cd);

    if (p==20000 && cd=='A')
    printf("Seating : VVIP");
    else if (p==10000 && cd=='B')
    printf("Seating : VIP");
    else if (p==5000 && cd=='C')
    printf("Seating : Special County");
    else if (p==2000 && cd=='D')
    printf("Seating : General County");
    else
    printf("Please Recheck your Input");
    return 0;
}