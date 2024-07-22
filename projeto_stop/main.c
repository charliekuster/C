/*Menu 
1 Fazer o cadastro dos jogadores (nome, idade, número de vitórias)
2 iniciar jogo
3 regras 
4 ranking 
5 tabela 
6 reiniciar 
7 sair do jogo*/

#include<stdio.h>
#include<stdlib.h>

#define w 100

typedef struct{
    char nome[w];
    int idade;
    int vitorias;
    int vazio;
}jogador;

typedef struct{
    char nome[w];
    char fruta[w];
    char animal[w];
    char objeto[w];
    char cor[w];
    char cep[w];
    char mse[w];
    char pdch[w];
    char tv[w];
    char comida[w];
}game; 

void Menu();
void registro(jogador jog[]);
void starGame(game jogador);




int main(){
    int i;
    jogador jg[5];
    for(i=0; i<5; i++){
        jg[i].vazio = 0;
    }

    game j1, j2, j3, j4, j5;

    Menu();
    
    for(; ;){
       
        scanf("%d", &i);
        if(i == 1){
            registro(jg); 
            starGame(j1);   
        }
    }
    return 0;
}

void Menu(){
    system("clear");
    printf("\t\t---> STOP STOP STOP!!! <---\n\n"); 
    printf("  1-> Início de jogo\n");
    printf("  2-> Ver as regras\n");
    printf("  3-> Rank\n");
    printf("  4-> Reiniciar\n");
    printf("  5-> sair do jogo :/\n");
}

void registro(jogador jog[]){
    int i, a;
    for(i=0; i<5; i++){
        printf("Nome do do jogador[%d]: ", i);
        scanf("%s", jog[i].nome);
        printf("Idade do jogado[%d]: ", i);
        scanf("%d", &jog[i].idade);
        jog[i].vazio = 1;
        printf("Quer adicionar outro jogador?\n 1=>SIM\t 2=>NÃO/n");
        scanf("%d", &a);
        if(a==2){
            break;
        }
    }
}

void starGame(game jogador){
    printf("Nome: ");
    scanf("%s", jogador.nome);
    printf("\n");
    printf("Fruta: "); 
    scanf("%s", jogador.fruta);
    printf("\n");
    printf("Animal: "); 
    scanf("%s", jogador.animal);
    printf("\n");
    printf("Objeto: "); 
    scanf("%s", jogador.objeto);
    printf("\n");
    printf("Cor: "); 
    scanf("%s", jogador.cor);
    printf("\n");
    printf("Cep: "); 
    fgets(jogador.cep, w, stdin);
    getchar();
    printf("\n");
    printf("MSE: "); 
    scanf("%s", jogador.mse);
    fgets(jogador.pdch, w, stdin);
    getchar();
    printf("\n");
    printf("TV: "); 
    fgets(jogador.tv, w, stdin);
    getchar();
    printf("\n");
    printf("Comida: "); 
    fgets(jogador.comida, w, stdin);
    getchar();
}
