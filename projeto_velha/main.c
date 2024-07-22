#include <stdio.h>
#include<stdlib.h>
#define S 3
 
typedef struct{
    char ox;
    int vazio;
}velha;

void Menu(void);
void Regras();
void gatName(char jogador[]);
void starGame_x(velha game[S][S]);
void starGame_o(velha game[S][S]);
void preGame(char jogador1[], char jogador2[]);
void Estrutura();
void startGame(velha game[S][S], char jogador1[], char jogador2[]);
int Verificacao_ho(velha game[S][S], char jogador2[]);
int Verificacao_hx(velha game[S][S], char jogador1[]);

int main(void){
    int o, l, c;
    char jogador1[20], jogador2[20];
    velha game[S][S];
    for(l=0; l<S; l++){
        for(c=0; c<S; c++){
            game[l][c].vazio = 0;
            game[l][c].ox = '_';
        }
    }
    for(; ;){
    Menu();
    scanf("%d", &o);
    if(o == 1){ 
        preGame(jogador1, jogador2);
        startGame(game, jogador1, jogador2);      
    }
    else if(o == 2){
        Regras(); 
    }
    else if(o == 3){
        printf("tchauzinhoo ;)");
        break;
    }
    else{
        printf("entre com um vaor de 1 a 3");
    }
    }
}

void Menu(void){
    printf("(: Jogo da velha :)\n");
    printf("  ***************\n\n");
    printf("Digite alguma das opções a seguir\n");
    printf("1 inícia o jogo\n");
    printf("2 ver regras\n");
    printf("3 sair do jogo\n");
}

//esclha 1
void preGame(char jogador1[], char jogador2[]){
    printf("Nome do jogador 1:\n");
    gatName(jogador1);
    printf("Nome do jogador 2:\n");
    gatName(jogador2);
    printf("Por convenção %s vai ficar com x e %s vai receber o :)\n", jogador1, jogador2);
    printf("Por convenção, também, %s vai começar o jogo\n", jogador1); 
}
void gatName(char jogador[]){
    scanf("%s", jogador);
}
void startGame(velha game[S][S], char jogador1[], char jogador2[]){
    Estrutura();
    for(; ;){
        printf("%s escolha uma posição:", jogador1);
        starGame_x(game);
        printf("%s escolha uma posição:", jogador2);
        starGame_o(game);
        if(Verificacao_ho(game, jogador2) == 1){
            printf("%s ganhou o jogo", jogador2);

        } 
        else if(Verificacao_hx(game, jogador1) == 1){
            printf("%s ganhou o jogo", jogador1);
        }
    }
}

int Verificacao_lx(velha game[S][S], char jogador1[]){
    int cont=0, l ,c;
    for(l=0; l<S; l++){
        for(c=0; c<S; c++){
            if(game[1][c].ox == 'x')
            cont++;
        }
    }
    if(cont ==3){
        printf("ganhou");
    }
return 0;    
}

void starGame_x(velha game[S][S]){
    int l, c, i, linha, coluna;
        scanf("%d %d", &linha, &coluna);
        if(game[linha][coluna].vazio == 0){
            game[linha][coluna].ox = 'x';
            game[linha][coluna].vazio = 1;
            system("clear");
        }
        else{
            printf(" Entre com outro valor :/"); 
            starGame_x(game);
        }
        system("clear");

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
            if(l==linha && c==coluna){
            printf("_%c_|", game[l][c].ox);
            }
            else{
              printf("_%c_|", game[l][c].ox);  
            }
        }
        printf("\n");
    }
}
void starGame_o(velha game[S][S]){
    int l, c, i, linha, coluna;
        scanf("%d %d", &linha, &coluna);
        if(game[linha][coluna].vazio == 0){
            game[linha][coluna].ox = 'o';
            game[linha][coluna].vazio = 1;
             system("clear");
        }
        else{
            printf(" Entre com outro valor :/"); 
            starGame_o(game);
        }
        system("clear");
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
            if(l==linha && c==coluna){
                printf("_%c_|", game[l][c].ox);
            }
            else{
                printf("_%c_|", game[l][c].ox);  
            }
        }
        printf("\n");
    }
}
//usuário digitar 2
void Regras(){
    int l, c, m[S][S];
    printf("1 = O objetivo do jogo é fazer uma sequência de três símbolos iguais, seja em linha vertical, horizontal ou diagonal, enquanto tenta impedir que seu adversário faça o mesmo;\n");
    printf("2 = Quando um dos participantes faz uma linha, ganha o jogo;\n");
    printf("3 = Começa do início, normalmente trocando os símbolos escolhidos\n");
    printf("Ex:\n");
    //printf do exemplo
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
            if(l==c){
                printf("_x_|");
            }
            else{
                printf("___|");
            }
        }
        printf("\n");
    }
    printf("\n\n");  
}
//estrutura do jogo da velha
void Estrutura(){
        int l, c, m[l][c];
        system("clear");
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
//funcoes de verificacao 
int Verificacao_ho(velha game[S][S], char jogador2[] ){
    int l, c, cont=0, cont2=0;
     for(l=0; l<S; l++){
        for(c=0; c<S; c++){
            if(l==c){
                if(game[l][c].ox == 'o'){
                    cont++;
                }
            }
            else if(game[l][S-1-l].ox == 'o'){
                    cont2++;
            }    
        }
    }
    if(cont==3){
        printf("%s ganhou", jogador2);
        return 1;
    }
    else if(cont2==3){
        printf("%s ganhou", jogador2);
        return 1;
    }
    else{
        return 0;
    }
}
int Verificacao_hx(velha game[S][S], char jogador1[]){
    int l, c, cont=0, cont2=0;
     for(l=0; l<S; l++){
        for(c=0; c<S; c++){
            if(l==c){
                if(game[l][c].ox == 'x'){
                    cont++;
                }
            }
            else if(game[l][S-1-l].ox == 'x'){
                    cont2++;
            }    
        }
    }
    if(cont==3){
        printf("%s ganhou", jogador1);
        return 1;
    }
    else if(cont2==3){
        printf("%s ganhou", jogador1);
        return 1;
    }
    else{
        return 0;
    }
}
