#include <stdio.h>
#define F 96
#define M 6.0

int main() {
  unsigned int mat;
  int fr;
  double p1, p2,p3,p4,p5,p6,p7,p8, l1, l2, l3, l4, l5, t, media;
  scanf("%u %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d",&mat, &p1, &p2,&p3, &p4, &p5,&p6,&p7, &p8,&l1,&l2,&l3,&l4,&l5,&t,&fr);
  while(mat!=-1){
     media = ((p1+p2+p3+p4+p5+p6+p7+p8)/8.0)*0.7 + ((l1+l2+l3+l4+l5)/5.0)*0.15 + t*0.15;
     if((media>=M)&&(fr>F))
       printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n",mat,media);
      else if((media>=M)&&(fr<F))
              printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n",mat,media);
             else if((media<6.0)&&(fr>=F))
                     printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n",mat,media);
                    else printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA  E POR FREQUENCIA\n",mat,media);
             
     scanf("%u %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d",&mat, &p1, &p2,&p3, &p4, &p5,&p6,&p7, &p8,&l1,&l2,&l3,&l4,&l5,&t,&fr);
  }
return 0;