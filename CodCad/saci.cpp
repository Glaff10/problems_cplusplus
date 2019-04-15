#include<bits/stdc++.h>

using namespace std;

#define push_back pb
typedef pair<int, int> pii;

int matriz[1010][1010], dist[1010][1010];

int bfs(int x, int y){
    int _x[] = {0, 1, 0, -1}, _y[] = {1, 0, -1, 0};
	queue<pii> fila;
	pii aux;

	aux.first = x;
	aux.second = y;

	fila.push(aux);

	while(!fila.empty()){

		pii v = fila.front();
		fila.pop();

        for(int i=0; i<4; i++){
         if((matriz[v.first+_x[i]][v.second+_y[i]] == 3 || matriz[v.first+_x[i]][v.second+_y[i]] == 1) && dist[v.first+_x[i]][v.second+_y[i]]==0){
                dist[v.first+_x[i]][v.second+_y[i]] = dist[v.first][v.second]+1;

				if(matriz[v.first+_x[i]][v.second+_y[i]] == 3)return dist[v.first+_x[i]][v.second+_y[i]];

				aux.first = v.first+_x[i]; aux.second = v.second+_y[i];
				fila.push(aux);
        }
        }
        //for(int j=0; j<=6; j++){printf("\n");for(int k=0; k<=5; k++)printf("%d", matriz[j][k]);}
        //printf("\n");

	}

}

int main(){

	int n, m,_x, _y;

	scanf("%d %d", &n, &m);

    memset(matriz, 0, sizeof(matriz));
    memset(dist, 0, sizeof(dist));

	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]==2){
				_x = i;
				_y = j;
			}
		}
	}

	int x = bfs(_x, _y);

	printf("%d\n", x+1);

	return 0;
}
