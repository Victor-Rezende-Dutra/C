#include <stdio.h>

int main() {
  int p1, r, n, soma=0, i;
  scanf("%d %d %d", &p1, &r, &n);
  for(i=0;i<n;i++){
    soma = soma + p1;
    p1 += r;
    }  
  printf("%d\n", soma);
return 0;
}