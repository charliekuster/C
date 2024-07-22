#include <stdio.h>

// void Numero(int *n);
// void Hoho(int *n);
// int main(void){
//     int n;
//     Numero(&n);
//     Hoho(&n);

// return 0;
// }

// void Numero(int *n){
//     scanf("%d", n);
// }

// void Hoho(int *n){
//     int h;
//     for(h=1; h<=*n; h++){
//     if(h == *n){
//         printf("Ho!\n");
//     }
//     else{
//         printf("Ho ");
//     }
//     }
// }
int main(void){
    int n, h;
    scanf("%d", &n);
    for(h=1; h<=n; h++){
    if(h == n){
        printf("Ho!\n");
    }
    else{
        printf("Ho ");
    }
    }

return 0;
}