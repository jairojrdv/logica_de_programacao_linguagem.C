#include <stdio.h>

int main() {    
    float P, PT, PP;
   printf("Qual seu peso (em KG) no planeta Terra? ");
   scanf("%f" ,&PT);
   printf("Digite 1-Mercúrio;2-Vênus ;3-Marte ;4-Júpiter ;5-Saturno ;6-Urano ;\n");
   printf("Escolha um planeta para saber seu peso nele:  ");
   scanf("%f" ,&P);
   if(P==1){
       PP=(PT/10)*0.37;
       printf("O seu peso em Mercúrio é %f kg." ,PP);
   }
    if(P==2){
       PP=(PT/10)*0.88;
       printf("O seu peso em Vênus é %f kg." ,PP);
   }
    if(P==3){
       PP=(PT/10)*0.38;
       printf("O seu peso em Marte é %f kg." ,PP);
   }
    if(P==4){
       PP=(PT/10)*2.64;
       printf("O seu peso em Júpiter é %f kg." ,PP);
   }
    if(P==5){
       PP=(PT/10)*1.15;
       printf("O seu peso em Saturno é %f kg." ,PP);
   }
    if(P==6){
       PP=(PT/10)*1.17;
       printf("O seu peso em Urano é %f kg." ,PP);
   }
   
   
   return 0;
}