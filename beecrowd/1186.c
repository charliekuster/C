#include<stdio.h> 
int main(void){
    int l, c, t=4, r=4;
    char resol;
    float m[t][t], soma, media;
    scanf("%c", &resol);
    for(l=0; l<t; l++){
        for(c=0;c<t;c++){
            scanf("%f", &m[l][c]);
        }
    }
    for(l=0; l<t; l++){
        r--;
        for(c=3;c>r;c--){
            soma+=m[l][c];
            media= soma/6;
        }
    }
    if(resol == 'S'){
        printf("%.1f\n", soma);
    }
    else if(resol == 'M'){
        printf("%.1f\n", media);
    }
    return 0;
}