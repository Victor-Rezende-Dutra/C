#include <stdio.h>

int main() {
    int matricula = 1;
    float horas = 1, porhora = 1, salario;

    while (1) {
        scanf("%d %f %f", &matricula, &horas, &porhora);
        getchar();
        if ((matricula == 0) || (horas == 0) || (porhora == 0)){
            break;
        }
        salario = horas * porhora;
        printf("%d %.2f\n", matricula, salario);
    }

    return 0;
}