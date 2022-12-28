#include <stdio.h>
#include <math.h>
int main() {
    float C, F;
    printf("digite uma temperatura em Celsius:");
    scanf("%f" ,&C);
    F=C*(9.0/5.0)+32.0;
    printf("A temperatura %f graus Celsius, é %f graus Farenheint se convertido" ,C, F);
    return 0;
}