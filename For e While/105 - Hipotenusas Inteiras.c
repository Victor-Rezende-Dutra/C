#include <stdio.h>
#include <math.h>

int main() {
    int h, n1, n2, i, hypotenuse;
    scanf("%d", &h);
    
    for (hypotenuse = 1; hypotenuse <= h; hypotenuse++) {
        if (hypotenuse > 0) {
            for (n1 = 1; n1 <= hypotenuse; n1++) {
                for (n2 = 1; n2 <= hypotenuse; n2++) {
                    if (hypotenuse > n1 && hypotenuse > n2) {
                        i = sqrt(n1 * n1 + n2 * n2);
                        if (i == hypotenuse && n1 <= n2 && n1 != n2) {
                            if ((pow(hypotenuse, 2) == (pow(n1,2) + (pow(n2, 2))))){
                            printf("hipotenusa = %d, catetos %d e %d\n", hypotenuse, n1, n2);
                            }
                        }
                    }
                }
            }
        }
    }
    
    return 0;
}




