// Online C compiler to run C program online
#include <stdio.h>

int main() {    
int saldo;
float credito;
printf("Qual o seu saldo médio: ");
scanf("%d" , &saldo);
 
if (saldo>=0 && saldo<=500){
printf("Você não possui credito disponivel.\n");
}
else if(saldo>=501 && saldo<=1000){
    credito=saldo*0.3;
    printf("O seu saldo é de %f reais." ,credito);
}
else if(saldo>=1001 && saldo<=3000){
    credito=saldo*0.4;
    printf("O seu saldo é de %f reais." ,credito);
}
else if(saldo>=3001){
    credito=saldo*0.5;
    printf("O seu saldo é de %f reais." ,credito);
}


   
   return 0;
}