#include <stdio.h>

int main() {
    float n, i, K, s, d, e, f, c, x, y, z, v;
    
    scanf("%f", &n);
    scanf("%f", &i);
    scanf("%f", &K);
    scanf("%f", &s);
    
    if (n > 0 && n < 9) {
        printf("Tabuada de soma:\n");
        x = (i);
        for (c = 1; c <= K; c++) {
            printf("%.2f + %.2f = %.2f\n", n, x, n + x);
            x += s;
        }
        
        printf("Tabuada de subtracao:\n");
        y = (i);
        for (d = 1; d <= K; d++) {
            printf("%.2f - %.2f = %.2f\n", n, y, n - y);
            y += s;
        }
        
        printf("Tabuada de multiplicacao:\n");
        z = (i);
        for (e = 1; e <= K; e++) {
            printf("%.2f x %.2f = %.2f\n", n, z, n * z);
            z += s;
        }
        
        printf("Tabuada de divisao:\n");
        v = (i);
        for (f = 1; f <= K; f++) {
            if (i != 0) {
                printf("%.2f / %.2f = %.2f\n", n, v, n / v);
                v += s;
                
            }
            }
        }
    
    return 0;
}