#include<cstdio>
#include<vector>
#include<iostream>

using namespace std;

int familias[50500];
vector <int> v[50500];
int n, m;

void dfs(int x){

    for(int i=0; i<(int)v[x].size(); i++){

        int vizinho = v[x][i];

        if(familias[vizinho] == -1){
            familias[vizinho] = familias[x];
            dfs(vizinho);
        }
    }

}

int main(){

    scanf("%d %d", &n, &m);

    for(int i=1; i<=n; i++)familias[i]=-1;

    for(int i=1; i<=m; i++){
        int x, y;
        scanf("%d %d", &x, &y);
        v[x].push_back(y);
        v[y].push_back(x);
    }

    int n_familias = 0;

    for(int i=1; i<=n; i++){

        if(familias[i]==-1){

            n_familias++;
            familias[i]=n_familias;
            dfs(i);
        }

    }

    printf("%d\n", n_familias);

    return 0;
}
