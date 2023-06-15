#include <stdio.h>

int main()
{
    int n, i, soma;
    scanf("%d", &n);
    for (i = 1; i <= 64; i++){
        if (i % 2 == 0){
            soma += n;
        }
        else{
            soma += 2*n;
        }
    }
    soma -= n;
    printf("%d", soma);
    return 0;
}
