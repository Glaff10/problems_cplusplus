#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
int matriz[100][100];
int dist[100][100];

int bfs(int x, int y){

    int _x[] = {1, 1, 2, 2, -1, -1, -2, -2}, _y[] = {2, -2, -1, 1, 2, -2, -1, 1};
	queue<pii> fila;
	pii aux;

	aux.first = x;
	aux.second = y;
	fila.push(aux);

	while(!fila.empty()){

        int n = fila.size();

        for(int j=0; j<n; j++){

            pii v = fila.front();
            fila.pop();

            for(int i=0; i<8; i++){
                //if(v.first+_x[i] > 0 && v.second+_y[i]>0 && v.first+_x[i]<9 && v.second+_y[i]<9){
                    if((matriz[v.first+_x[i]][v.second+_y[i]] == 0 || matriz[v.first+_x[i]][v.second+_y[i]] == 2) && !dist[v.first+_x[i]][v.second+_y[i]]){
                        dist[v.first+_x[i]][v.second+_y[i]] = dist[v.first][v.second]+1;
                        for(int k=0; k<=8; k++){printf("\n");for(int l=0; l<=10; l++)printf("%d ", dist[k][l]);}
                        printf("\n");
                        printf("%d %d\n", v.first, v.second);
                        if(matriz[v.first+_x[i]][v.second+_y[i]] == 2)return dist[v.first+_x[i]][v.second+_y[i]];

                        aux.first = v.first+_x[i]; aux.second = v.second+_y[i];
                        fila.push(aux);
                    }
                //}
            }

        }


	}

}

int main(){
    char a[10], b[10];

    while(scanf(" %s %s", a, b)!=EOF){
        int x, y, _x, _y;

        memset(matriz, 0, sizeof(matriz));
        memset(dist, 0, sizeof(dist));

        if(a[0]=='a')x=1;
        if(a[0]=='b')x=2;
        if(a[0]=='c')x=3;
        if(a[0]=='d')x=4;
        if(a[0]=='e')x=5;
        if(a[0]=='f')x=6;
        if(a[0]=='g')x=7;
        if(a[0]=='h')x=8;
        y = a[1]-'0';

        if(b[0]=='a')_x=1;
        if(b[0]=='b')_x=2;
        if(b[0]=='c')_x=3;
        if(b[0]=='d')_x=4;
        if(b[0]=='e')_x=5;
        if(b[0]=='f')_x=6;
        if(b[0]=='g')_x=7;
        if(b[0]=='h')_x=8;
        _y = b[1]-'0';
        matriz[_x][_y] = 2;

        //for(int i=0; i<=8; i++){printf("\n");for(int j=0; j<=8; j++)printf("%d ", matriz[i][j]);}
        //printf("\n");
        //for(int i=0; i<=8; i++){printf("\n");for(int j=0; j<=8; j++)printf("%d ", dist[i][j]);}

        int tam=0;

        if(!(x==_x && y==_y))tam = bfs(x, y);


        printf("To get from %s to %s takes %d knight moves.\n", a, b, tam);

    }
    return 0;
}
