#include <stdio.h>

int main() {
    int T, i;
    scanf("%d", &T);

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);

        int containsZeroA = 0;
        int containsZeroB = 0;

        int digitA, digitB;
        int reversedA = 0, reversedB = 0;

        // Check if A or B contains zero or have more than three digits
        if (A < 100 || B < 100 || A % 10 == 0 || B % 10 == 0 || (A / 10) % 10 == 0 || (B / 10) % 10 == 0) {
            continue;
        }

        // Compare digits from right to left
        for (i = 0; i < 3; i++) {
            digitA = A % 10;
            digitB = B % 10;

            if (digitA == 0) {
                containsZeroA = 1;
                break;
            }
            if (digitB == 0) {
                containsZeroB = 1;
                break;
            }

            reversedA = reversedA * 10 + digitA;
            reversedB = reversedB * 10 + digitB;

            A /= 10;
            B /= 10;
        }

        // Check if A or B contains zero
        if (containsZeroA || containsZeroB) {
            continue;
        }

        // Determine the greater number
        if (reversedA > reversedB) {
            printf("%d\n", reversedA);
        } else if (reversedB > reversedA) {
            printf("%d\n", reversedB);
        }
    }

    return 0;
}



