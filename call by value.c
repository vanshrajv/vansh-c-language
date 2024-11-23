#include <stdio.h>

void modifyValue(int num) {
    num = num + 10;
    printf("Inside modifyValue: %d\n", num);
}

int main() {
    int value = 5;
    printf("Before modifyValue: %d\n", value);
    modifyValue(value);
    printf("After modifyValue: %d\n", value);
    return 0;
}
