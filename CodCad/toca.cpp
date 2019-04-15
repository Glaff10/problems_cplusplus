#include<cstdio>
#include<cstring>

#define MAX 10100

int matriz[MAX][MAX], vis[MAX][MAX];

int dfs(int x, int y, int cont=0){
    bool flag=false;
    cont++;
    if(matriz[x+1][y]==3 || matriz[x][y+1]==3 || matriz[x-1][y]==3 || matriz[x][y-1]==3)return cont;
    int soma = cont++;
    if(matriz[x+1][y]==1 && !vis[x+1][y]){vis[x+1][y]=1; flag = true; cont+=dfs(x+1, y, soma);}
    if(matriz[x][y+1]==1 && !vis[x][y+1]){vis[x][y+1]=1; flag = true; cont+=dfs(x, y+1, soma);}
    if(matriz[x-1][y]==1 && !vis[x-1][y]){vis[x-1][y]=1; flag = true; cont+=dfs(x-1, y, soma);}
    if(matriz[x][y-1]==1 && !vis[x][y-1]){vis[x][y-1]=1; flag = true; cont+=dfs(x, y-1, soma);}

    if(flag)return cont;

    return 0;
}
int main(){

    int n, m, x, y;

    memset(vis, 0, MAX);
    memset(matriz, 0, MAX);
    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){scanf("%d", &matriz[i][j]); if(matriz[i][j]==2){x=i; y=j;}}
    }

    printf("%d\n", dfs(x, y));
    return 0;
}
