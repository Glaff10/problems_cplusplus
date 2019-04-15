#include<cstdio>

int x, y;
int flavio(int n, int m, int h){
    int anterior, proximo;
    anterior = h;
    proximo = (anterior+m)%x;
    n--;
    if(n==1)return proximo;

    printf("%-- d -- %d\n\n", anterior, proximo);

    flavio(n, m, proximo);
}

int main(){

    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d %d", &x, &y);

        int b = flavio(x, y, x);

        printf("%d\n", b);

    }
    return 0;
}
