#include <stdio.h>

int main() {
    int numerator, denominator;
    float decimal;

    scanf("%f", &decimal);

    numerator = decimal * 10000;
    denominator = 10000;

    int a = numerator;
    int b = denominator;
    int remainder;

    // Calculate the greatest common divisor (GCD) using Euclidean algorithm
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    numerator /= a;
    denominator /= a;

    printf("%d/%d\n", numerator, denominator);

    return 0;
}