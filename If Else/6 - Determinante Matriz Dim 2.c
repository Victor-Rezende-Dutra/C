#include <stdio.h>

int main()
{
   float a;
   float b;
   float c;
   float d;
   float det;
   scanf("%f", &a);
   scanf("%f", &b);
   scanf("%f", &c);
   scanf("%f", &d);
   
   det = a*d - c*b;
   
   printf("O VALOR DO DETERMINANTE E = %.2f", det);
   
    return 0;
}
