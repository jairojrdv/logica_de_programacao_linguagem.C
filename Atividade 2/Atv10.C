#include <stdio.h>

int main() {
    // Write C code here
   int N1,N2,S,S2;
   printf("Digite um n?mero inteiro: ");
   scanf("%d", &N1);
   printf("Digite outro n?mero inteiro: ");
   scanf("%d", &N2);
   S=N1+N2;
   if(S>20){
       S2=S+8;
       printf("J? que o valor ? maior que 20, ent?o: %d" ,S2);
   }
   if(S<=20){
       S2=S-5;
       printf("J? que o n?mero ? menor que 20, ent?o: %d" ,S2);
   }
   
   
    return 0;
}