#include<cstring>
#include<cstdio>
#include<vector>

#define MAX 100101
using namespace std;

int time[MAX], n, m;
vector<int> lista[MAX];

void dfs(int x){

    for(int i=0; i<(int)lista[x].size(); i++){
        int v = lista[x][i];

        if(time[v]==-1)
        {
            time[v]=time[x];
            dfs(v);
        }
    }
}
int main(){

    scanf("%d %d", &n, &m);

    memset(time, -1, MAX);

    for(int i=1; i<=m; i++){

        int p, r;
        scanf("%d %d", &p, &r);
        lista[p].push_back(r);
        lista[r].push_back(p);
    }

    int numero_times = 0;

    for(int i=1; i<=n; i++){
        //printf("%d\n\n", time[2]);
        if(time[i]==-1){

            numero_times++;
            time[i] = numero_times;
            dfs(i);
        }
    }
    printf("%d\n", numero_times);

    return 0;
}
