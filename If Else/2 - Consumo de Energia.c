#include <stdio.h>

//100kW custam 70% do salário mínimo
//Ler o salário mínimo
//Qtd de kW de uma casa
//Imprimir : o valor em reais de cada kW
//Imprimir : o valor em reais a ser pago pelo consumo da residência;
//Imprimir : o novo valor a ser pago pela residência com um desconto de 10%.
int main()
{
    float salario;
    float consumo;
    float kw;
    float total;
    float desconto;
    scanf("%f", &salario);
    scanf("%f", &consumo);
    kw = 0.7/100*salario;
    total = kw*consumo;
    desconto = total*0.9;
    
    printf("Custo por kW: R$ %.2f\n", kw);
    printf("Custo do consumo: R$ %.2f\n", total);
    printf("Custo com desconto: R$ %.2f\n", desconto);
    return 0;
}
