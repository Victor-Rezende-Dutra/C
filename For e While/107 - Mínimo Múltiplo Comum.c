#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int i = 2;
    int mmc = 1;

    while (a != 1 || b != 1 || c != 1) {
        if (a % i == 0 || b % i == 0 || c % i == 0) {
            printf("%d %d %d : %d\n", a, b, c, i);
            if (a % i == 0) {
                a /= i;
            }
            if (b % i == 0) {
                b /= i;
            }
            if (c % i == 0) {
                c /= i;
            }
            mmc *= i;
        } else {
            i++;
        }
    }

    printf("MMC: %d\n", mmc);

    return 0;
}
