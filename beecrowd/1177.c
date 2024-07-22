#include<stdio.h>
int main(void){
    int TAM=10;
    int t, n[TAM], cont, i;
    scanf("%d", &t);
    for(i=0, cont=0; 1<TAM; i++, cont++){
        n[i]= cont;
        printf("n[%d] = %d", i, n[i]);
        if(cont==t){
            cont=0;
        }
    }
    return 0;
}
