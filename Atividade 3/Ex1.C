#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, S, M;
    printf("Digite um número: ");
    scanf("%f" ,&n1);
    printf("Digite outro número: ");
    scanf("%f" ,&n2);
    printf("Digite outro número: ");
    scanf("%f" ,&n3);
    printf("Digite outro número: ");
    scanf("%f" ,&n4);
    printf("Digite outro número: ");
    scanf("%f" ,&n5);
    S=n1+n2+n3+n4+n5;
    M=(n1+n2+n3+n4+n5)/5;
    printf("A Soma entre os números é %.2f \n" ,S);
    printf("A Média entre os números é %.2f" ,M);

    return 0;
}