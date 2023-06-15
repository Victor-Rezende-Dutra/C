#include <stdio.h>

//Fazer um programa que leia um valor de tempo expresso em horas, minutos e segundos e que converta esse tempo para um valor em segundos.

int main()
{
    int horas;
    int minutos;
    int segundos;
    int total;
    scanf("%i", &horas);
    scanf("%i", &minutos);
    scanf("%i", &segundos);
    total = (horas * 60 * 60) + (minutos * 60) + (segundos);

    printf("O TEMPO EM SEGUNDOS E = %i", total);
    return 0;
}
