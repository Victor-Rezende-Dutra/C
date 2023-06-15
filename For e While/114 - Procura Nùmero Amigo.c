#include <stdio.h>

int main() {
    int n, count = 0, num = 1, sum1 = 0, sum2 = 0, i;
    scanf("%d", &n);

    if (n >= 1 && n < 9) {
        count = 0;
        num = 1;
        while (count < n) {
           sum1 = 0;
            for (i = 1; i <= num / 2; i++) {
                if (num % i == 0) {
                    sum1 += i;
                }
            }

            sum2 = 0;
            for (i = 1; i <= sum1 / 2; i++) {
                if (sum1 % i == 0) {
                    sum2 += i;
                }
            }

            if (num != sum1 && num == sum2) {
                printf("(%d,%d)\n", num, sum1);
                count++;
            }

            num++;
        }
    }

    return 0;
}
