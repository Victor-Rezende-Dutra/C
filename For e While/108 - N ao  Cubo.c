#include <stdio.h>

int main() {
  int n, m, i, inicio, soma;

  scanf("%d", &m);

  for (n = 1; n <= m; n++) {
    soma = 0;
    for (inicio = 1; soma != n * n * n; inicio = inicio + 2) {
      soma = 0;
      for (i = 0; i < n; i++)
	soma = soma + inicio + 2 * i;
    }
    inicio = inicio - 2;
    printf("%d*%d*%d = %d", n, n, n, inicio);
    for (i = 1; i < n; i++)
      printf("+%d", inicio+2*i);
    printf("\n");    
  }

  return 0;
}