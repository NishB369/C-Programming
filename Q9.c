#include<stdio.h>

int main() {
    int a, b, ch;
    char yn;

    printf("Menu:\n");
    printf("Option 1 : AND\n");
    printf("Option 2 : OR\n");
    printf("Option 3 : NAND\n");
    printf("Option 4 : NOR\n");

    do {
        printf("Enter your choice of Operation from 1 to 4: ");
        scanf("%d", &ch);

        printf("Enter num1 and num2 : ");
        scanf("%d %d", &a, &b);

        switch (ch) {
            case 1:
                printf("Result : %d && %d : %d\n", a, b, a && b);
                break;

            case 2:
                printf("Result : %d || %d : %d\n", a, b, a || b);
                break;

            case 3:
                printf("Result : !(%d && %d) : %d\n", a, b, !(a && b));
                break;

            case 4:
                printf("Result : !(%d || %d) : %d\n", a, b, !(a || b));
                break;

            default:
                printf("Invalid Option Choice\n");
                break;
        }

        printf("Do you want to Continue? (y/n): ");
        scanf(" %c", &yn);

    } while (yn == 'y' || yn == 'Y');

    return 0;
}
