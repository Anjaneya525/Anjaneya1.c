*#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Maximum is: %d\n", max(num1, num2));
    return 0;
}