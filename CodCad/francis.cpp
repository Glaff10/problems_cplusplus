#include<cstdio>
#include<algorithm>
#include<iostream>


struct pedido{

    int ini, fim;
};
bool cmp(pedido x, pedido y){
    return x.fim<y.fim;
}
int main(){
    int n, atraso[10100];
    pedido v[10100];
    scanf("%d", &n);

    for(int i=0; i<n; i++)scanf("%d %d", &v[i].ini, &v[i].fim);

    std::sort(v, v+n, cmp);

    int trab = 0;
    for(int i=0; i<n; i++){
        trab += v[i].ini;
        if(trab-v[i].fim>0)atraso[i]=trab-v[i].fim;
        else{
            atraso[i]=0;
        }
    }
    std::sort(atraso, atraso+n, std::greater<int>());


    printf("%d\n", atraso[0]);

    return 0;
}
