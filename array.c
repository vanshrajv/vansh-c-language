#include <stdio.h>

int main() {
    int array[2][2] = {{4, 2}, {6, 3}};
    int sum = 0, multiplication = 1, division = 1, subtraction;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum += array[i][j];
            multiplication *= array[i][j];
            division /= array[i][j];
        }
    }

    subtraction = sum - (2 * 2);

    printf("Sum: %d\n", sum);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %d\n", division);
    printf("Subtraction: %d\n", subtraction);

    return 0;
}
