#include <stdio.h>

//definindo a funcao
void leia_matriz(int matriz[5][5]);
void soma_matrizes(int m1[5][5], int m2[5][5], int resposta[5][5]);


int main(void){
    //A+B, C+D, e A+C
    int a[5][5], b[5][5], c[5][5], d[5][5];
    int r1[5][5], r2[5][5], r3[5][5];

    //imprimir 
    int i, j;
    int valor;

    printf("Leitura da matriz A\n");
    leia_matriz(a);

    printf("Leitura da matriz B\n");
    leia_matriz(b);

    printf("Leitura da matriz C\n");
    leia_matriz(c);

    printf("Leitura da matriz D\n");
    leia_matriz(d);

    soma_matrizes(a, b, r1);
    soma_matrizes(c, d, r2);
    soma_matrizes(a, c, r3);

    //resposta = IMPRIMIR A MATRIZ
    printf("Resultado 1\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            valor = r1[i][j];

            printf("%d ", valor);
        }
        printf("\n");
    }

    printf("Resultado 2\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            valor = r2[i][j];
            printf("%d ", valor);
        }
        printf("\n");
    }

    printf("Resultado 3\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            valor = r3[i][j];

            printf("%d ", valor);
        }
        printf("\n");
    }


    return 0;
}


//definindo a funcao
void leia_matriz(int matriz[5][5]){
    int i, j;
    int valor;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &valor);
            matriz[i][j] = valor;
        }
    }


} 

void soma_matrizes(int m1[5][5], int m2[5][5], int resposta[5][5]){
    int i, j;
    int valor;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            valor = m1[i][j] + m2[i][j]; //recebendo 2 matrizes
            resposta[i][j] = valor; // calulando a matriz soma
        }
    }

}

