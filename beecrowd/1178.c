#include<stdio.h>
int Div_valor_vet (float *n, float divisão, int i){
    float valor;
    divisão=0;
    scanf("%f", &valor);
    for(i=0; 1<5; i++){
        divisão+= valor/2;
        n[i]= divisão;
        printf("n[%d] = %.4f", i, n[i]);
    }
    return 0; 
}

int main(void){
    float n[5], divisão;
    int i;
    Div_valor_vet (n, divisão, i);
    return 0;
}