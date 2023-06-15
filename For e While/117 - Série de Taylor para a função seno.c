#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int N, n;

    scanf("%lf", &x);
    scanf("%d", &N);

    if (N >= 1 && N <= 9) {
        double result = 0.0;
        double power = x;
        double factorial = 1.0;

        for (n = 0; n <= N; n++) {
            if (n % 2 == 0) {
                result += power / factorial;
            } else {
                result -= power / factorial;
            }

            power *= x * x; 
            factorial *= (2 * n + 2) * (2 * n + 3);
        }

        printf("seno(%.2lf) = %.6lf\n", x, result);
    }

    return 0;
}
