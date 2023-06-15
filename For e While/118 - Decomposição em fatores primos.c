#include <stdio.h>

int main() {
    int number, divisor;

    do {
        scanf("%d", &number);
        if (number <= 1) {
            printf("Fatoracao nao e possivel para o numero %d!\n", number);
        }
    } while (number <= 1);

    printf("%d = ", number);

    for (divisor = 2; number > 1; divisor++) {
        while (number % divisor == 0) {
            printf("%d", divisor);
            if(divisor != 0){
            number /= divisor;
            }
            if (number > 1) {
                printf(" x ");
            }
        }
    }

    printf("\n");

    return 0;
}
