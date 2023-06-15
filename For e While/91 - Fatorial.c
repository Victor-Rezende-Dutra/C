#include <stdio.h>
#include <math.h>

int main() {
    int n, i, fact = 1;
    scanf("%d", &n);
    for(i=1;i<=n;i++){    
      fact=fact*i;    
  }    
  printf("%d! = %d\n",n,fact);    
return 0;  
}
