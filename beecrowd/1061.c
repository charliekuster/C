//Como entrada, na primeira linha vai haver a descrição “Dia”, 
//seguido de um espaço e o dia do mês no qual o evento vai começar.
//Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. 
//Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas,
//indicando o término do evento.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int DiaHora(int h){
    h = h*24;
    return h;
}

int HoraMinuto(int m){
    m = m*60;
    return m;
}

int MinutoSegundo(int s){
    s = s*60;
    return s;
}

int Seg(int d, int h, int m, int s){
    int si;
    d = DiaHora(d);
    d = HoraMinuto(d);
    d = MinutoSegundo(d);
    h = HoraMinuto(h);
    h = MinutoSegundo(h);
    m = MinutoSegundo(m);
    si = d + h + m + s;
    return si;
}

void Saida(int  i, int f){
    int tempo, dia, segundo, minutos;
    tempo = f - i;
    printf("%d dia(s)", tempo/24);
    dia = tempo/24;
}

int main(){
    int dc, hc, mc, sc;
    int df, hf, mf, sf;
    int II, IF;
    printf("Dia ");
    scanf("%d", &dc);
    scanf("%d", &hc);
    scanf("%d", &mc);
    scanf("%d", &sc);
    printf("Dia ");
    scanf("%d", &df);
    scanf("%d", &hf);
    scanf("%d", &mf);
    scanf("%d", &sf);
    II = Seg(dc, hc, mc, sc);
    IF = Seg(df, hf, mf, sf);
    Saida(II, IF);
    return 0;
}