#include <stdio.h>

int main() {
    double a, r, total, renda;
    int n, i, c = 1;
    scanf("%lf %lf %d", &a, &r, &n);

    total = a;  // Initialize total with the initial principal amount

    for (i = 1; i <= n; i++) {
        total *= (1 + r);  // Multiply total by (1 + r) for each iteration
        renda = total - a;
        printf("a*(1+r)^%d = %.2f, renda: %.2f\n", c, total, renda);
        c++;
    }

    return 0;
}