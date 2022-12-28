#include <stdio.h>
#include <stdlib.h>
void main() {
int resp, qtdVolumes=0;
float peso, pesoTotal=0, pesoMedio=0;
printf("Deseja cadastrar uma caixa? 1-SIM / 2-NAO \n");
scanf("%d", &resp);
while (resp == 1) {
qtdVolumes++;
printf("Informe o peso da caixa: \n");
scanf("%f", &peso);
pesoTotal += peso;
printf("Deseja cadastrar uma caixa? 1-SIM / 2-NAO \n");
scanf("%d", &resp);
}
pesoMedio = pesoTotal / qtdVolumes;
printf("Quantidade de volumes: %.2d \n", qtdVolumes);
printf("Peso total dos volumes: %.2f \n", pesoTotal);
printf("Peso medio dos volumes: %.2f \n", pesoMedio);

return 0;
}