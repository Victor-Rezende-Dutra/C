#include <stdio.h>

int main() {
    unsigned long int codigo;
    float precoCompra, precoVenda;
    int quantidade;
    int lucro10 = 0, lucro1020 = 0, lucro20 = 0;
    unsigned long int maiorLucroCodigo = 0, maiorVendaCodigo = 0;
    float totalCompra = 0, totalVenda = 0;
    float maiorLucro = 0;
    int maiorVenda = 0;

    int c;
    for (c = 0; c < 4; c++) {
        scanf("%lu %f %f %d", &codigo, &precoCompra, &precoVenda, &quantidade);

        float lucro = (precoVenda - precoCompra) * quantidade;
        float margemLucro = (lucro / (precoCompra * quantidade)) * 100;
        totalCompra += precoCompra * quantidade;
        totalVenda += precoVenda * quantidade;

        if (margemLucro < 10) {
            lucro10++;
        } else if (margemLucro >= 10 && margemLucro <= 20) {
            lucro1020++;
        } else {
            lucro20++;
        }

        if (lucro > maiorLucro) {
            maiorLucro = lucro;
            maiorLucroCodigo = codigo;
        }

        if (quantidade > maiorVenda) {
            maiorVenda = quantidade;
            maiorVendaCodigo = codigo;
        }
    }

    float lucroTotal = totalVenda - totalCompra;
    float percentualLucroTotal = (lucroTotal / totalCompra) * 100;

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", lucro10);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", lucro1020);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", lucro20);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", maiorLucroCodigo);
    printf("Codigo da mercadoria mais vendida: %lu\n", maiorVendaCodigo);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n",
           totalCompra, totalVenda, percentualLucroTotal);

    return 0;
}
