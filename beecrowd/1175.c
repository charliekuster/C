#include<stdio.h>
int Valores_vetor(int *n, int *n2, int i){
  for(i=0;i<=19;i++){
    scanf("%d", &n[i]);
    n2[i] = n[i];
  }
  return 0;
}
int Troca_0_10(int tamax, int i, int *n){
  for(i=0, tamax=19; i<10;i++,tamax--){
    n[i] = n[tamax];
    printf("N[%d] = %d\n", i, n[i]);
  return 0;
  }
}
int Troca_10_19(int i, int tamin, int *n2, int *n){
  for(i=10; i<20 ,tamin>=0;i++,tamin--){
    n2[i] = n[tamin];
    printf("N[%d] = %d\n", i, n2[tamin]);
  }
  return 0;
}

int main(){
  int n[20], n2[20], valor, i, x, tamax, tamin;
  Valores_vetor(n[20], n2[20], i);
  Troca_0_10(tamax, i, *n);
  Troca_10_19(i, tamin, *n2, *n);
  return 0;
}