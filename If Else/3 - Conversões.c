#include <stdio.h>
//Ler temp em farenheit 
//Imprimir em celsius
//Ler qtd de chuva em polegadas
//Imprimir em mm

int main()
{
    float F;
    float polegadas;
    float CELSIUS;
    float chuva;
    scanf("%f", &F);
    scanf("%f", &polegadas);
   
    CELSIUS = 5*(F-32)/9;
    chuva = polegadas*25.4;
    
    
    printf("O VALOR EM CELSIUS = %.2f\n", CELSIUS);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", chuva);
    return 0;
}
