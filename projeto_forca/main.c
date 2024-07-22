#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//estrutura
void estrutura();
void esturura1();
void esturura2();
void esturura3();
void esturura4();
void esturura5();
void esturura6();
void esturura7();

void getsPalavra(char p[], int *t){
    gets(p);
    *t = strlen(p);
    system("clear");
}

void game(char p[], int *t, char v[], int *cont){
    int i, j, tem_letra=1;
    char x;
        printf("Digite a letra desejada: ");
        scanf("%c", &x);
        getchar();
        for(i=0; i<*t; i++){
            if(p[i] == x){
                tem_letra=0;
                v[i] = x;
                
            }
        } 
        printf("%d\n", tem_letra);
        if(tem_letra==1){
            *cont+=1;
        }  

}

int main(){
    int t, i, cont=0, x;
    char palavra[100], palavra2[100];
    getsPalavra(palavra, &t);
    char v[t];
    for(i=0; i<t; i++){
        v[i] = '_';
    }
    estrutura();
    for(;;){
        for(i=0; i<t; i++){
            printf("%c", v[i]);
        }
        game(palavra, &t, v, &cont);
        printf("%d", cont);
        if(cont==0){
            estrutura();
        }
        else if(cont==1){
            esturura1();
        }
        else if(cont==2){
            esturura2();
        }
        else if(cont==3){
            esturura3();
        }
        else if(cont==4){
            esturura4();
        }
        else if(cont==5){
            esturura5();
        }
        else if(cont==6){
            esturura6();
        }
        else if(cont==7){
            esturura7();
            printf("Suas chances acabaram :(, mas vc pode tentar chutar a palavra :)" );
            gets(palavra2);
            if(strcmp(palavra, palavra2)== 0){
                printf("Tenho duas palavras para vc para bens");
            }
            else{
                printf("Não foi dessa vez :(");
            }
        }
    }
}






void estrutura(){
    printf("________\n");
    printf("|      |\n");
    printf("|      \n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("––––––––––––    ");
}
void esturura1(){
    printf("________\n");
    printf("|      |\n");
    printf("|      0\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("––––––––––––    ");
}
void esturura2(){
    printf("________\n");
    printf("|      |\n");
    printf("|      0\n");
    printf("|      |\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("––––––––––––    ");
}void esturura3(){
    printf("________\n");
    printf("|      |\n");
    printf("|      0\n");
    printf("|      |\\\n");
    printf("|n");
    printf("|\n");
    printf("|\n");
    printf("––––––––––––    ");
}
void esturura4(){
    printf("________\n");
    printf("|      |\n");
    printf("|      0\n");
    printf("|     /|\\\n");
    printf("|\n");
    printf("|\n");
    printf("|\n");
    printf("––––––––––––    ");
}
void esturura5(){
    printf("________\n");
    printf("|      |\n");
    printf("|      0\n");
    printf("|     /|\\\n");
    printf("|      |\n");
    printf("|\n");
    printf("|\n");
    printf("––––––––––––    ");
}
void esturura6(){
    printf("________\n");
    printf("|      |\n");
    printf("|      0\n");
    printf("|     /|\\\n");
    printf("|      |\n");
    printf("|       \\\n");
    printf("|\n");
    printf("––––––––––––    ");
}
void esturura7(){
    printf("________\n");
    printf("|      |\n");
    printf("|      0\n");
    printf("|     /|\\\n");
    printf("|      |\n");
    printf("|     / \\\n");
    printf("|\n");
    printf("––––––––––––    ");
}
