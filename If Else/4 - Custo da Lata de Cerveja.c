#include <stdio.h>

//Ler o raio em metros
//Ler a altura em metros

int main()
{
    float raio;
    float altura;
    float pi;
    float at;
    float p;
    pi = 3.14159;
    scanf("%f", &raio);
    scanf("%f", &altura);
    at = 2*(pi*raio*raio) + (2*pi*raio*altura);
    p = at * 100;
    printf("O VALOR DO CUSTO E = %.2f", p);

    return 0;
}
