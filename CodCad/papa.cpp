#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>

int dp[1010];

typedef struct caixa{

    int peso, res_;

}caixa;

bool comp(caixa x, caixa y){

    return x.res_>y.res_;
}

int mochila(int n){
    int atual = n;
    if(dp[atual]!=-1)return dp[atual];

    if(n==0) return dp[0] = res_[0];

    if(cx.peso[atual]+mochila(atual-1)<=cx.res_[atual-1]){dp[atual]=mochila(atual-1)+res_[atual]; break;}
    else dp[atual] = mochila(atual-1);
}

int main(){

    int n, cont=0;
    caixa cx[10100];

    memset(dp, -1, sizeof(dp));

    scanf("%d", &n);

    for(int i=0; i<n; i++){scanf("%d %d", &cx.peso, &cx.res_[i]); cx.res_[i] = cx.res_[i] - cx[i].peso;}

    std::sort(cx, cx+n, comp);

    return 0;
}
