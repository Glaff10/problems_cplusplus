#include<cstdio>
#include<cstring>


using namespace std;

int  n, m, componente[1101][1101];
char matz[1101][1101];

void dfs(int x, int y){

    if(matz[x+1][y]=='.' && !componente[x+1][y]){
        componente[x+1][y] = componente[x][y];
        dfs(x+1, y);
    }

    if(matz[x-1][y]=='.' && !componente[x-1][y]){
        componente[x-1][y] = componente[x][y];
        dfs(x-1, y);
    }

    if(matz[x][y+1]=='.' && !componente[x][y+1]){
        componente[x][y+1] = componente[x][y];
        dfs(x, y+1);
    }

    if(matz[x][y-1]=='.' && !componente[x][y-1]){
        componente[x][y-1] = componente[x][y];
        dfs(x, y-1);
    }

}

int main(){

    scanf("%d %d", &n, &m);

    memset(componente, 0, sizeof(componente));

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            char carac;
            scanf(" %c", &carac);
            matz[i][j]=carac;
        }
    }

    int n_comp = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(componente[i][j]==0 && matz[i][j]=='.')
            {
                n_comp++;
                componente[i][j]=n_comp;
                dfs(i, j);
            }
        }
    }
    printf("%d\n", n_comp);


    return 0;
}
