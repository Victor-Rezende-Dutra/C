#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int N, n;

    scanf("%lf", &x);
    scanf("%d", &N);

    if (N >= 2 && N <= 9) {
        double result = 1.0;
        double term = 1.0;

        for (n = 1; n <= N; n++) {
            term *= x / n;
            result += term;
        }

        printf("e^%.2lf = %.6lf\n", x, result);
    } 

    return 0;
}

