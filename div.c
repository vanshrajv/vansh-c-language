#include <stdio.h>

int div(int a, int b) {
    return a/b;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    result = div(num1, num2);
    printf("The result of div is: %d\n", result);

    return 0;
}
