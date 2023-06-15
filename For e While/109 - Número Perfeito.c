#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    int somaDivisores = 0;
    printf("%d =", n);

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            if(i == 1){
            printf(" %d", i);
            }
            else{
                printf(" + %d", i);
            }
            somaDivisores += i;
        }
    }

    printf(" = %d", somaDivisores);

    if (somaDivisores == n) {
        printf(" (NUMERO PERFEITO)\n");
    } else {
        printf(" (NUMERO NAO E PERFEITO)\n");
    }

    return 0;
}
