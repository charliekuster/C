#include<stdio.h>
int Menor_posicao_vetor(int TAM, int n[], int i, int valor){
    int x=0, gustavo=0;
    for(i=0; i<TAM; i++){
        scanf("%d", &valor);
        n[i]=valor;
        if(i==0)
            x=n[0];
        if(n[i]<=x){
              gustavo=i;
              x=n[i];
        }
    }
    printf("Menor valor: %d\n", x);
    printf("Posicao: %d", gustavo);
    return 0;
}
int main (void){
    int TAM;
    scanf("%d", &TAM);
    int n[TAM], i, valor;
    Menor_posicao_vetor(TAM, n, i, valor);
} 