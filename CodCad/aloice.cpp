#include<cstdio>

int main(){
    int a, b, saldo, menor=10000;

    scanf("%d %d", &a, &saldo);

    for(int i=0; i<a; i++){
        scanf("%d", &b);
        saldo+=b;
        if(saldo<menor)menor=saldo;
    }

    printf("%d\n", menor);

    return 0;
}
