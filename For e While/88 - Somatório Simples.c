#include <stdio.h>

int main() {
  int n, i;
  double soma=0.0;
  scanf("%d", &n);
  if(n<2)
    printf("Numero invalido!\n");
  else { for(i=1; i<=n;i++)
            soma += 1.0/i;
         printf("%.6lf\n", soma); 
       }

return 0;
}
