#include <stdio.h>
#include <math.h>
int main() {
    float valor, quadrado;
    printf("digite um número:");
    scanf("%f" ,&valor);
    quadrado=valor*valor;
    printf("O quadrado de %f é %f" ,valor, quadrado);
    return 0;
}