#include <stdio.h>

int main() {    

    float PT, PP;
    int P;
   printf("Qual seu peso (em KG) no planeta Terra? ");
   scanf("%f" ,&PT);
   printf("Digite:\n1-Mercúrio;2-Vênus ;3-Marte ; \n4-Júpiter ;5-Saturno ;6-Urano ;\n");
   printf("Escolha um planeta para saber seu peso nele:  ");
   scanf("%d" ,&P);
   
   switch(P){
       case 1: 
        PP=(PT/10)*0.37;
        break;
       
       case 2: 
        PP=(PT/10)*0.88;
        break;
       
        case 3: 
        PP=(PT/10)*0.38;
        break;
       
        case 4: 
        PP=(PT/10)*2.64;
        break;
       
        case 5: 
        PP=(PT/10)*1.15;
        break;
       
        case 6: 
        PP=(PT/10)*1.17;
        break;
       
        default:
        printf("Planeta inválido");
   }
   printf("Peso no planeta escolhido: %f" ,PP);
   
   
   return 0;
}