#include <stdio.h>

void small() {
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Compare using if-else
    if (num1 <= num2 && num1 <= num3) {
        printf("The smallest number is: %d\n", num1);
    } else if (num2 <= num1 && num2 <= num3) {
        printf("The smallest number is: %d\n", num2);
    } else {
        printf("The smallest number is: %d\n", num3);
    }

 //   return 0;
}
