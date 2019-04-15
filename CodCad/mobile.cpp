#include<cstdio>
#include<algorithm>
#include<vector>
#define MAX 101001
using namespace std;

int familia[MAX], filhos[MAX], n;
vector<int>lista[MAX];
void dfs(int v=0){

    for(int i =0; i<(int)lista[v].size(); i++){
        familia[lista[v][i]] = v;
        dfs(lista[v][i]);
    }

}

int main(){

    scanf("%d", &n);

    for(int i=1; i<=n; i++){

        int p, r;

        scanf(" %d %d", &p, &r);

        lista[r].push_back(p);

        filhos[r]++;

    }

    dfs();

    sort(familia, familia+n);

    bool flag = true;

    for(int i=1; i<=n; i++){
        int j = i+1;
        while(familia[i]==familia[j] && j<=n){
            if(filhos[i]!=filhos[j])flag=false;
            j++;
        }
        i = j;
    }

    if(flag)printf("bem\n");
    else printf("mal\n");


    return 0;
}
