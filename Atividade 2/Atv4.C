#include <stdio.h>

int main() {
    // Write C code here
    int cod;//Codigo do cargo  
   float S, R;//Sal?rio e Reajuste
   printf("Sal?rio atual: ");
   scanf("%f",&S);
   printf("C?digo do cargo: ");
   scanf("%d" ,&cod);
   if(cod==1){
       R=S*0.07;
   }
    if(cod==2){
       R=S*0.09;
   }
   if(cod==3){
       R=S*0.05;
   }
   if(cod==4){
       R=S*0.12;
   }
   printf("O seu reajuste ? de %f\n" ,R);
   printf("O seu novo sal?rio ? %f", R+S);
    return 0;
}