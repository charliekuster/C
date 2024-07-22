// #include<stdio.h>
// #define TAM 4
// typedef void V;
// typedef int I;


// V Leitura_char(char *resolucao);
// V Leitura_valores(float m[TAM][TAM]);
// V Resol_soma(float m[TAM][TAM], float *soma);

// I main(void){
//     float m[TAM][TAM], soma;
//     char resolucao;
//     Leitura_char(&resolucao);
//     Leitura_valores(m);
//     Resol_soma(m, &soma); 
//     if(resolucao == 'S'){
//         printf("%.1f\n", soma); 
//     }
//     else if(resolucao == 'M'){
//         printf("%.1f\n", soma/30);  
//     }
//     return 0;
// }  

// V Leitura_char(char *resolucao){
//     scanf("%c", resolucao);
// }

// V Leitura_valores(float m[TAM][TAM]){
//     int c, l;
//     float v;
//     for(l=0; l<TAM; l++){
//         for(c=0; c<TAM; c++){
//             scanf("%f", &v);
//             m[l][c] = v;
//         }
//     }
// }
// V Resol_soma(float m[TAM][TAM], float *soma){
//     int c, l;
//     for(l=0; l<TAM; l++){
//         for(c=0; c<TAM; c++){
//             if(l<c && l<11-c){
//                 *soma += m[l][c];  
//             }
//         }
//     }
// }

#include <stdio.h>
//leitura da string
 void Ler_string(char str[]){
 
    scanf("%s", str);
 
    return;
}
//funcao para calcular o numero de ocorrencia
void Calcular_ocorrencia(char str1[], char str2[], int *ocorrencia){
 
    int TAM1, TAM2, l, c, test;
 
    TAM1 = strlen(str1);
 
    TAM2 = strlen(str2);
 
    for(l = 0 ; l < TAM1 ; l++){
 
        test = 0;
 
        for(c = 0 ; c < TAM2 ; c++){
 
            if(str1[l + c] == str2[c]){
 
                test++;
            }
        }
 
        if(test == TAM2){
 
            ++*ocorrencia;
        }
    }
 
    return;
}

//funcao principal  
int main(){
 
    char string1[10000], string2[10000];
 
    int ocorrencia = 0;
 
    Ler_string(string1);
 
    Ler_string(string2);
 
    Calcular_num_ocorrencia(string1, string2, &ocorrencia);
 
    printf("Número de ocorrência: %d", ocorrencia);
 
    return(0);
}




 