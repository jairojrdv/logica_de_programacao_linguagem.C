#include <stdio.h>

int main() {
    // Write C code here
   int M, M2, M3;//M ? um n?mero maior que 20 
   printf("Digite um n?mero inteiro: ");
   scanf("%d" ,&M);
   M>20;
   if(M>20){
       M2=M*2;//M2 ? calculado somente se M for maior que 20
       printf("Resultado: %d" ,M2);
   }
if(M<20){
       M3=M*4;//M3 ? calculado somente se M for menor que 20
       printf("Resultado: %d" ,M3);
   } 
   
    return 0;
}