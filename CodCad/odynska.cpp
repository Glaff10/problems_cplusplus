#include<cstdio>
#include<algorithm>


int main(){

    long long int n, m, soma=0, v[101010];
    bool flag = true;


    scanf("%lld %lld", &n, &m);

    for(int i=1; i<=n; i++)scanf("%lld", &v[i]);

    for(int i=1; i<=n; i++){
        int menor, maior;

        menor = std::min(m-v[i], v[i]);
        maior = std::max(m-v[i], v[i]);

        if(menor>=v[i-1])v[i]=menor;
        else if(maior>=v[i-1])v[i]=maior;
             else {
                printf("-1\n");
                return 0;
             }

        soma += v[i];

       // printf("%d\n\n", v[i]);


    }

    printf("%lld\n", soma);

    return 0;
}
