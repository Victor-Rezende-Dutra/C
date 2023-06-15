#include <stdio.h>

int main() {
  int n;
  float n1, n2, n3, M, m, i;
  scanf("%d", &n);
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);
  if((n1>=n2)&&(n1>=n3)){
    M = n1;
    if(n2>=n3){
      i = n2;
      m = n3;
     }else { i = n3; 
             m = n2;
            }
    }else if((n2>=n1)&&(n2>=n3)) {
            M = n2;
            if(n1>=n3) {
              i = n1;
              m = n3;
             }else {i=n3;
                    m = n1;
                   }
            } else { M = n3;
                     if(n1>=n2){
                       i = n1;
                       m = n2;
                      }else { i = n2;
                              m = n1;
                             }
                 }
     if(n==1)
       printf("%.2f %.2f %.2f\n", m, i, M);
      else if(n==2)
              printf("%.2f %.2f %.2f\n", M, i, m);   
             else printf("%.2f %.2f %.2f\n", i, M, m);  
    
return 0;
}