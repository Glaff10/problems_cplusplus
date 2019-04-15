#include<cstdio>

int main(void){

    int seq, a, b, aux, maior;
    scanf("%d", &a);
    seq = 1;
    maior = seq;
    for(int i=0; i<a; i++){
        scanf("%d", &b);
        if(b==aux)seq++;
        else seq=1;
        if(seq>=maior)maior = seq;
        aux = b;
    }

    printf("%d\n", maior);

    return 0;
}
