#include<cstdio>

int main(){

    int a, b, aux, soma;

    scanf("%d", &a);
    aux = -100000;
    soma  = 0;
    for(int i = 0; i<a; i++){
        scanf("%d", &b);
        if(b-aux < 10)soma+=b-aux;
        else soma+=10;
        aux = b;
    }

    printf("%d\n", soma);

    return 0;

}
