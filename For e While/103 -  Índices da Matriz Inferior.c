#include <stdio.h>

int main() {
    int m, n, i, j;
    scanf("%d", &m);
    n = m;
    if(m >= 2 && m <= 100){
    for (i = 1; i <= m; i++) {
        for (j = 1; j <= m; j++) {
            if (i < j) {
                printf("(%d,%d)", i, j);
                if (j != 2 && (i - j) != 1 && j != m && i != 1) {
                    printf("-");
                }
            }
        }
        printf("\n");
    }
}
    
    return 0;
}

