#include<cstdio>

int main(){
    int a, b, menor;

    scanf("%d", &a);

    menor = 150000;

    for(int i = 0; i<a; i++){
        scanf("%d", &b);
        if(b<=menor)menor=b;
    }

    printf("%d\n", menor);

    return 0;
}
