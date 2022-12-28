#include <stdio.h>
#include <stdlib.h>
void main() {
float num, soma=0, media=0;
int qtdeNum, i;
printf("Informe a quantidade de numeros:");
scanf("%d", &qtdeNum);
for (i=1; i<=qtdeNum; i++) {
printf("Informe o numero:");
scanf("%f", &num);
soma += num;
}
media = soma / qtdeNum;
printf("A media e: %.1f", media);

return 0;
}
