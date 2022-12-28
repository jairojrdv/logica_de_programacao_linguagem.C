// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    float M, K;
    printf("digite uma velocidade em Km/H:");
    scanf("%f" ,&K);
    M=K/3.6;
    printf("A velocidade %f em Km/H, é %f em m/s se convertido",K, M);
    return 0;
}