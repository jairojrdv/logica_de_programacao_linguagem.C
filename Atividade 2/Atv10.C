#include <stdio.h>

int main() {
    // Write C code here
   int N1,N2,S,S2;
   printf("Digite um número inteiro: ");
   scanf("%d", &N1);
   printf("Digite outro número inteiro: ");
   scanf("%d", &N2);
   S=N1+N2;
   if(S>20){
       S2=S+8;
       printf("Já que o valor é maior que 20, então: %d" ,S2);
   }
   if(S<=20){
       S2=S-5;
       printf("Já que o número é menor que 20, então: %d" ,S2);
   }
   
   
    return 0;
}