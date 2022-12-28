#include <stdio.h>

int main() {
    int D, Pass;
    printf("Utilize 1-R. Norte, 2-R.Nordeste , 3-R.Centro-Oeste ,4-R. Sul. \n");
    printf("Qual o Código do seu destino? ");
    scanf("%d" ,&D);
    printf("Utilize 1-[IDA] e 2-[IDA E VOLTA]\n");
    printf("Sua viagem é apenas de ida, ou ida e volta? ");
    scanf("%d" ,&Pass);
   
    if(D==1){
        if(Pass==1) printf("O preço da sua passagem é 500.00 reais");
        else
        printf("O preço da sua passagem é de 900.00 reais");
    }
      if(D==2){
        if(Pass==1) printf("O preço da sua passagem é 350.00 reais");
        else
        printf("O preço da sua passagem é de 650.00 reais");
    }  
     if(D==3){
        if(Pass==1) printf("O preço da sua passagem é 350.00 reais");
        else
        printf("O preço da sua passagem é de 600.00 reais");
    }
     if(D==4){
        if(Pass==1) printf("O preço da sua passagem é 300.00 reais");
        else
        printf("O preço da sua passagem é de 550.00 reais");
    }
   return 0;
}