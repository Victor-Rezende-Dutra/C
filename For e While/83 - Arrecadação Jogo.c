#include <stdio.h>
#define Popular 1.00
#define Geral  5.00
#define Arqui 10.00
#define Cad  20.00

int main() {

  int n, i, pessoas;
  float perpop, perger, perarq, percad,arrecadacao;
  scanf("%d", &n);
  i=1;
  while(i<=n){
     scanf("%d %f %f %f %f", &pessoas, &perpop, &perger, &perarq, &percad);
     arrecadacao = pessoas*(perpop*Popular + perger*Geral + perarq*Arqui + percad*Cad)/100.0;
     printf("A RENDA DO JOGO N. %d E = %.2f\n", i++, arrecadacao);
  }
   return 0;
 }
