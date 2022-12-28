#include <stdio.h>

int main() {    
int mes;
printf("Escreva um número inteiro de 1 a 12: ");
scanf("%d" , &mes);
switch(mes){
    case 1:
    printf("Este número corresponde a Janeiro.");
    break;
    case 2:
    printf("Este número corresponde a Fevereiro.");
    break;
    case 3:
    printf("Este número corresponde a Março.");
    break;
    case 4:
    printf("Este número corresponde a Abril.");
    break;
    case 5:
    printf("Este número corresponde a Maio.");
    break;
    case 6:
    printf("Este número corresponde a Junho.");
    break;
    case 7:
    printf("Este número corresponde a Julho.");
    break;
    case 8:
    printf("Este número corresponde a Agosto.");
    break;
    case 9:
    printf("Este número corresponde a Setembro.");
    break;
    case 10:
    printf("Este número corresponde a Outubro.");
    break;
    case 11:
    printf("Este número corresponde a Novembro.");
    break;
    case 12:
    printf("Este número corresponde a Dezembro.");
    break;
    default:
    printf("Mês inválido");
}
   
   return 0;
}