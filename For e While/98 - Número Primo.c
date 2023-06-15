#include <stdio.h>

int main() {
    int n, i, resultado;
    scanf("%d", &n);
    if (n < 0){
        printf("Numero invalido!\n");
    }
    else{
        for(i = 2; i <= n; i++){
            if(n%i == 0){
                resultado ++;
            }
        }
    }
    if (resultado == 1){
        printf("PRIMO\n");
    }
    else{
        printf("NAO PRIMO\n");
    }
return 0;
}
