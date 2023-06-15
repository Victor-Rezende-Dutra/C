#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int N, n;
    double term;
    
    scanf("%lf", &x);
    scanf("%d", &N);
    double cosX = 1.0; 
    double power = x * x;
    double factorial = 2.0;
    for (n = 1; n <= N; n++) {
        term = pow(-1, n) * power / factorial;
        cosX += term;

        power *= x * x;
        factorial *= (2 * n + 1) * (2 * n + 2);
    }

    printf("cos(%.2lf) = %.6lf\n", x, cosX);

    return 0;
}
