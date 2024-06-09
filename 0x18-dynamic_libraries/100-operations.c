#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0; // You can choose a suitable error value or behavior here.
    }
}

int mod(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("Error: Modulus by zero\n");
        return 0; // You can choose a suitable error value or behavior here.
    }
}

int main() {
    int a = 10;
    int b = 2;

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", sub(a, b));
    printf("Multiplication: %d\n", mul(a, b));
    printf("Division: %d\n", divide(a, b));
    printf("Modulus: %d\n", mod(a, b));

    return 0;
}
