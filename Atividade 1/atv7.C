// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    printf("Vamos calcular o volume de um cilíndro:\n");
    float V,R, H;
    printf("Digite a altura do cilíndro:");
    scanf("%f" ,&H);
    printf("Digite o raio do Cilíndro:");
    scanf("%f" ,&R);
    V=R*R*H*3.141592;
    printf("O Volume do cilíndro é %f",V);
    return 0;
}