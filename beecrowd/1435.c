#include<stdio.h>
int main(){
    char r;
    int t=5, l, c, c2=0, co=0, valor=0, m[t][t], soma=0, media, valor2=0;
    for(l=0; l<t; l++){
        valor++;
        valor2++;
        soma--;
        for(c=0; c<t; c++){
            if(l<=c && l<=4-c){
                m[l][c] = valor;
                printf("matriz[%d][%d]=%d ",l, c, m[l][c]);
            }
            if(l>c && l<4-c){
                valor2++;
                m[l][c] = valor2-1;
                printf("matriz[%d][%d]=%d ",l, c, m[l][c]); 
            }
         }
        valor2=0;
        printf("\n");
        }
    return 0;
}