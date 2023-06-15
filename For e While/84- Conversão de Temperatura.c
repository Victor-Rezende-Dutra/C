#include <stdio.h>

int main() {
  int n, i=0;
  double fah, C;
  scanf("%d",&n);
  while(i<n) {
    scanf("%lf", &fah);
    C = 5.0*(fah - 32.0)/9.0;
    printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n",fah, C);
    i++;
  }
return 0;
}
