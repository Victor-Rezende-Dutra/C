#include <stdio.h>

int main() {
  int n, xa, x, i, cont=1, maior=1;
  scanf("%d", &n);
  scanf("%d", &xa);
  i=1;
  while(i<n) {
    scanf("%d", &x);
    if(xa==x)
      cont++;
     else cont=1;
     if(maior<cont)
       maior = cont;
     xa = x;
     i++;
  }
  printf("O comprimento do segmento de numeros iguais e: %d\n",maior);

return 0;
}
