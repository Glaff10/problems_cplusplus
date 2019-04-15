#include<cstdio>

int matriz[10101][10101];

int main(){

    int n, m;

    scanf("%d %d", &n, &m);

    for(int i=0; i<=n+1; i++){

        for(int j=0; j<=m+1; j++){
            matriz[i][j] = 0;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            char x;
            scanf(" %c", &x);
            if(x=='.')matriz[i][j] = 0;
            else matriz[i][j] = 1;
        }

    }

    int cont = 0;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=m; j++){

            if(matriz[i][j]==1){
                if(matriz[i][j-1]==0 || matriz[i-1][j]==0 || matriz[i][j+1]==0 || matriz[i+1][j] == 0)cont++;
            }
        }
    }

    printf("%d\n", cont);

    return 0;

}
