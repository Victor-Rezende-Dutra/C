#include <stdio.h>
#include <math.h>

int main()
{
    double raiz;
    float h;
    float a;
    float volume;
    scanf("%f", &h);
    scanf("%f", &a);
    raiz = sqrt(3);
    volume = (a*a*raiz*h)/2;
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume);
    return 0;
}
