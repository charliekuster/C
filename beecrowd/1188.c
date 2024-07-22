#include<stdio.h>

int main(void){
    int l, c;
    double m[12][12], soma, media;
    char resolucao;
    scanf("%c", &resolucao);
    for(l=0; l<12; l++){
        for(c=0; c<12; c++){
            scanf("%lf", &m[l][c]);
            if(l>c && l>11-c){
                soma += m[l][c]; 
                media = soma/30;
            } 
        }
    }
    if(resolucao == 'S'){
        printf("%.1lf\n", soma); 
    }
    else if(resolucao == 'M'){
        printf("%.1lf\n", media);  
    }
    return 0;
} 


