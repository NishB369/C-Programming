#include<stdio.h>

int main() {
    int sum = 0, ch;
    char yn;


    printf("Menu:\n");
        printf("Option 1 : Item1 = 100\n");
        printf("Option 2 : Item2 = 200\n");
        printf("Option 3 : Item3 = 300\n");
        printf("Option 4 : Item4 = 350\n");
        printf("Option 5 : Item5 = 400\n");
        printf("Option 6 : Item6 = 450\n");

    do {
        
        printf("Do you want to Continue? (y/n): ");
        scanf(" %c", &yn);  

        if (yn == 'y' || yn == 'Y') {
            printf("Enter your choice of Item from 1 to 6: ");
            scanf("%d", &ch);

            switch (ch) {
                case 1:
                    sum += 100;
                    break;

                case 2:
                    sum += 200;
                    break;

                case 3:
                    sum += 300;
                    break;

                case 4:
                    sum += 350;
                    break;

                case 5:
                    sum += 400;
                    break;

                case 6:
                    sum += 450;
                    break;

                default:
                    printf("Invalid Item Choice\n");
                    break;
            }
        }
    } while (yn == 'y' || yn == 'Y');

    if (sum > 2000)
        printf("Order Value = %d --> Unable : Deficit : %d\n", sum, sum - 2000);
    else
        printf("Order Value = %d --> Able : Savings : %d\n", sum, 2000 - sum);

    return 0;
}
