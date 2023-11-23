#include <stdio.h>

int main() {
    int age, fit_scr;
    char edn_lvl, crimnl_bg, ctznship;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you an Indian Citizen (y/n): ");
    scanf(" %c", &ctznship);

    printf("Have you cleared HIGH SCHOOL or not (y/n): ");
    scanf(" %c", &edn_lvl);

    printf("Do you have a criminal background? (y/n): ");
    scanf(" %c", &crimnl_bg);

    printf("Enter your physical fitness score (out of 100): ");
    scanf("%d", &fit_scr);

    if ((age >= 18 && age <= 35) && (ctznship == 'y' || ctznship == 'Y') && (edn_lvl == 'y' || edn_lvl == 'Y') && (crimnl_bg == 'n' || crimnl_bg == 'N') && (fit_scr >= 80))
        printf("You are Eligible to take the test for Army Selection.\n");
    else
        printf("Sorry, You are Not Eligible to take the test for Army Selection.\n");

    return 0;
}
