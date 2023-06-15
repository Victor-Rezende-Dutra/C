#include <stdio.h>

int main() {
    int num, countOdd = 0, countEven = 0;
    int sumOdd = 0, sumEven = 0;

    while (1) {
        scanf("%d", &num);

        if (num == 0)
            break;

        if (num % 2 == 0) {
            sumEven += num;
            countEven++;
        } else {
            sumOdd += num;
            countOdd++;
        }
    }

    double avgOdd = countOdd > 0 ? (double)sumOdd / countOdd : 0.0;
    double avgEven = countEven > 0 ? (double)sumEven / countEven : 0.0;
    printf("MEDIA PAR: %.6lf\n", avgEven);
    printf("MEDIA IMPAR: %.6lf\n", avgOdd);

    return 0;
}

