#include <stdio.h>

int main() {    
int mes;
printf("Escreva um n?mero inteiro de 1 a 12: ");
scanf("%d" , &mes);
switch(mes){
    case 1:
    printf("Este n?mero corresponde a Janeiro.");
    break;
    case 2:
    printf("Este n?mero corresponde a Fevereiro.");
    break;
    case 3:
    printf("Este n?mero corresponde a Mar?o.");
    break;
    case 4:
    printf("Este n?mero corresponde a Abril.");
    break;
    case 5:
    printf("Este n?mero corresponde a Maio.");
    break;
    case 6:
    printf("Este n?mero corresponde a Junho.");
    break;
    case 7:
    printf("Este n?mero corresponde a Julho.");
    break;
    case 8:
    printf("Este n?mero corresponde a Agosto.");
    break;
    case 9:
    printf("Este n?mero corresponde a Setembro.");
    break;
    case 10:
    printf("Este n?mero corresponde a Outubro.");
    break;
    case 11:
    printf("Este n?mero corresponde a Novembro.");
    break;
    case 12:
    printf("Este n?mero corresponde a Dezembro.");
    break;
    default:
    printf("M?s inv?lido");
}
   
   return 0;
}