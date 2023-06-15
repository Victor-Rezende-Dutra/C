#include <stdio.h>
#include <math.h>

int main() {
    int n, i, c = 2,q = 4;
    scanf("%d", &n);
    if ((n > 5) && (n < 2000)){
    while (c <= n){
        printf("%d^2 = %d\n", c, q);
        c += 2;
        q = pow(c, 2);
    }
    }
return 0;
}
