#include<cstdio>
#include<vector>
#include<algorithm>
#define MAX 10010

using namespace std;

int h=0, n, m, geracao[MAX];
double presenca[MAX], qtd[MAX];

vector<int> lista[MAX];

void dfs(int v=0, int l=0){

    geracao[v]=l;
    qtd[l]++;

    h = max(h,l);

    for(int i=0; i<(int)lista[v].size(); i++)
        dfs(lista[v][i], l+1);

}

int main(){

    scanf("%d %d", &n, &m);

    for(int i=1; i<=n; i++){
    int p;
    scanf(" %d", &p);
    lista[p].push_back(i);
    }

    dfs();

    for(int i=1; i<=m; i++){

        int part;

        scanf(" %d", &part);

        presenca[geracao[part]]++;
    }

    //printf("%d\n\n", h);
    for(int i=1; i<=h; i++)printf("%.2lf ", 100*presenca[i]/qtd[i]);

    printf("\n");

    return 0;
}
