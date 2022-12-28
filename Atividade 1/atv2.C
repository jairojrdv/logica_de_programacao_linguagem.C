#include <stdio.h>

int main() {
    int valor1, valor2, soma;
    printf("Digite um número: ");
    scanf("%d" ,&valor1);
    printf("digite outro número: ");
    scanf("%d" ,&valor2);
    soma=valor1+valor2;
    printf("%d+%d=%d",valor1, valor2, soma);
    
    return 0;
}