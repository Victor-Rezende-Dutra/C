#include <stdio.h>

int main() {
    int n, i;
    
    while (1) {
        scanf("%d", &n);
        
        if (n == 0)
            break;
        
        float numero, anterior;
        int ordenada = 1;
        
        scanf("%f", &anterior);
        
        for (i = 1; i < n; i++) {
            scanf("%f", &numero);
            
            if (ordenada && numero <= anterior)
                ordenada = 0;
            
            anterior = numero;
        }
        
        if (ordenada) {
            printf("ORDENADA\n");
        } else {
            printf("DESORDENADA\n");
            while (n-- > 1)
                scanf("%f", &numero);
        }
    }
    
    return 0;
}
