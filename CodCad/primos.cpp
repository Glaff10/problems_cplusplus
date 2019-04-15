#include<cstdio>

int main(){
    int n, soma;
    char c;

    scanf("%d", &n);

    soma = 0;

    for(int i=0; i<n; i++){
        scanf(" %c", &c);
        if(c=='P' || c=='C')soma+=2;
        if(c=='A')soma++;
    }
    printf("%d\n", soma);

    return 0;
}
