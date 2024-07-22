#include<stdio.h>
#define S 3

void Estrutura();



void starGame(int m[S][S]){
    int l, c, linha, coluna;
        scanf("%d %d", &linha, &coluna);
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
                    m[l][c] = 0;
                    printf("_%d_|", m[l][c]);
                }
                else{
                    printf("___|");
                }
            }
            printf("\n");
        }   
}


int main(){
    int game[S][S], linha, coluna;

    Estrutura(game);

    printf("Jogador 1, escolha uma posição:\n");
    starGame(game);
     starGame(game);
      starGame(game);
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



