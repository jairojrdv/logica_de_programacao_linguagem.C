#include <stdio.h>

int main() {
    float A,P;
    char sexo;
    printf("Qual sua altura? ");
    scanf("%f" ,&A);
    printf("Qual seu sexo? <M ou F> ");
    scanf("%s" ,&sexo);
    if(sexo == 'M' ){
        P=(72.7*A)-58 ;
        printf("Seu peso ideal é: %f" ,P);
    }
    if(sexo=='F'){
       P=(62.1*A)-44.7;
       printf("Seu peso ideal é: %f" ,P);
    }
    
    return 0;
}