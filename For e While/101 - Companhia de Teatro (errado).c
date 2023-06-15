#include <stdio.h>

int main()
{
    float valoringresso, valorinicial, valorfinal, dif, totalcomum, lucro, i;
    int n = 0, k = 0;
    int allNegative = 1; // Flag to track if all lucro values are negative

    scanf("%f", &valoringresso);
    scanf("%f", &valorinicial);
    scanf("%f", &valorfinal);

    if (valorinicial >= valorfinal)
    {
        printf("INTERVALO INVALIDO.\n");
    }

    for (i = valorinicial; i <= valorfinal; i += 1)
    {
        if (i < valoringresso)
        {
            dif = valoringresso - i;
            n = 120 + (int)(dif / 0.5) * 25;
            lucro = i * n - 200 - 0.05 * n;
        }
        else if (i == valoringresso)
        {
            k = 120;
            lucro = valoringresso * k - 200 - 0.05 * k;
        }
        else if (i > valoringresso)
        {
            dif = i - valoringresso;
            n = 120 - (int)(dif / 0.5) * 30;
            lucro = i * n - 200 - 0.05 * n;
        }

        printf("V: %.2f, N: %d, L: %.2f\n", i, n, lucro);

        if (lucro >= 0)
            allNegative = 0;
    }

    if (allNegative)
    {
        printf("Melhor valor final: 0.00\n");
        printf("Lucro: 0.00\n");
        printf("Numero de ingressos: 0\n");
        return 0;
    }

    if (valoringresso - 1 >= valorinicial && valoringresso - 1 <= valorfinal)
    {
        dif = valoringresso - (valoringresso - 1);
        n = 120 + (int)(dif / 0.5) * 25;
        lucro = (valoringresso - 1) * n - 200 - 0.05 * n;
        printf("Melhor valor final: %.2f\n", valoringresso - 1);
        printf("Lucro: %.2f\n", lucro);
        printf("Numero de ingressos: %d\n", n);
    }
    else if (valoringresso >= valorinicial && valoringresso <= valorfinal)
    {
        k = 120;
        lucro = valoringresso * k - 200 - 0.05 * k;
        printf("Melhor valor final: %.2f\n", valoringresso);
        printf("Lucro: %.2f\n", lucro);
        printf("Numero de ingressos: %d\n", k);
    }

    return 0;
}
