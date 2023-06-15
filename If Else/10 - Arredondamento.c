#include <stdio.h>
#include <math.h>

int main()
{
    float number;
    float number_1;
    float number_2;
    float number3;
    scanf("%f", &number);
    number_1 = number * 10;
    number_1 = round(number_1);
    number_1 = number_1 /10;
    printf("%.6f\n", number_1);
    
    number_2 = number * 100;
    number_2 = round(number_2);
    number_2 = number_2 /100;
    printf("%.6f\n", number_2);
    
    number3 = number * 1000;
    number3 = round(number3);
    number3 = number3 /1000;
    printf("%.6f\n", number3);
    
    return 0;
}
