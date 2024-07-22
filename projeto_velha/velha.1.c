#include<stdio.h>
#define S 3

void Estrutura();

typedef struct{
    char xo;
    int vazio;
}velha;

void starGame(velha g[S][S]){
    int l, c, linha, coluna;
    for(; ;){
        scanf("%d %d", &linha, &coluna);
        for(l=0; l<S; l++){
            for(c=0; c<S; c++){
                 scanf("%c", &g[l][c].xo);
                 break;
            }
        }
       
        for(c=0; c<S; c++){
            if(c == S-1){
            printf("   %d\n", c);
            }
            else{
            printf("   %d", c);
            }
        }
        for(l=0; l<S; l++){
            printf("%d |", l);
            for(c=0; c<S; c++){
                if(c==coluna && l==linha){
                    printf("_%c_|", g[linha][coluna].xo);
                }
                else{
                    printf("___|");
                }
            }
            printf("\n");
        }  
    }
         
}






int main(){
    int l, c, i;
    velha game[S][S];

    Estrutura();
     for(l=0; l<S; l++){
        for(c=0; c<S; c++){
        game[l][c].vazio = 0;
        }
    }
    starGame(game);


    return 0;
}


void Estrutura(){
        int l, c, m[l][c];
        for(c=0; c<S; c++){
            if(c == S-1){
            printf("   %d\n", c);
            }
            else{
            printf("   %d", c);
         
            }
        }
        for(l=0; l<S; l++){
            printf("%d |", l);
            for(c=0; c<S; c++){
                printf("___|");
            }
            printf("\n");
        }
}
