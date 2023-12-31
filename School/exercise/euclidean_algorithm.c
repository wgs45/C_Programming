#include <stdio.h>

// * The Euclidean algorithm is a way to find the greatest
// * common divisor of two positive integers. GCD
// * of two numbers is the largest number that divides both of them. A simple way to find GCD is to factorize both numbers and multiply common prime factors

int main() {
    int x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("The GCD is: %d\n", x);

    return 0;
}