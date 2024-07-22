#include<stdio.h>
int main(){
    char r;
    int t=2, l, c;
    float m[t][t], soma=0, media=0;
    scanf("%c", &r);
    for(l=0; l<t; l++){
        for(c=0; c<t; c++){
            scanf("%f", &m[l][c]);
                soma += m[l][c];
                media = soma / 2; 
        }
    }
    if(r == 'S'){
        printf("%.1f", soma);
    }
    else if(r == 'M'){
        printf("%.1f", media);
    }
    return 0;
}