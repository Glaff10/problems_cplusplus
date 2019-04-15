#include<bits/stdc++.h>

using namespace std;

char matriz[1010][1010];
int dist[1010][1010];

vector<pair<int, int> > fire;

int bfs(int x, int y){

	int _x[] = {0, 1, 0, -1}, _y[] = {1, 0, -1, 0};

	queue<pair<int, int> > fila; queue<pair<int, int> > fogo;

	pair<int, int> aux;

	if((int)fire.size()){
        for(int i=0; i<(int)fire.size(); i++){
            fogo.push(fire[i]);
        }
	}

	aux.first = x; aux.second = y;

	//printf("%d %d\n\n", aux.first, aux.second);

	fila.push(aux);

	while(!fila.empty()){

        for(int j=0; j<(int)fire.size(); j++){
            pair<int, int> f = fogo.front();
            //printf("%d %d\n\n", f.first, f.second);
            fogo.pop();
			for(int i=0; i<4; i++){
				if(matriz[f.first+_x[i]][f.second+_y[i]]=='.'){

					matriz[f.first+_x[i]][f.second+_y[i]] = 'b';

					aux.first = f.first+_x[i]; aux.second = f.second+_y[i];
					fogo.push(aux);
				}
			}
        }

        bool passou = false;
       	
       	int n = fila.size();

       	for(int j=0; j<n; j++){ 
       		pair<int, int> v = fila.front();
        	fila.pop();
			for(int i=0; i<4; i++){

				if(matriz[v.first+_x[i]][v.second+_y[i]]=='.' || matriz[v.first+_x[i]][v.second+_y[i]]=='o'){

                	passou = true;

               		dist[v.first+_x[i]][v.second+_y[i]] = dist[v.first][v.second]+1;

					if(matriz[v.first+_x[i]][v.second+_y[i]] == 'o')return dist[v.first][v.second]+1;

					matriz[v.first+_x[i]][v.second+_y[i]] = 'J';

					aux.first = v.first+_x[i]; aux.second = v.second+_y[i];
					fila.push(aux);
				}
			}
		}
	
		if(!passou)return 0;

	}

}

int main(){

	int n, t, m;

	scanf("%d", &n);

	for(int i=0; i<n; i++){

		int x, y;

		memset(dist, 0, sizeof(dist));

        for(int j=0; j<1010; j++){
            for(int k=0; k<1010; k++)matriz[j][k] = 'o';
        }

        fire.clear();

		scanf("%d %d", &t, &m);
		for(int j=1; j<=t; j++){
			pair<int, int> aux;
			for(int k=1; k<=m; k++){
                scanf(" %c", &matriz[j][k] );
                if(matriz[j][k]=='J'){x = j; y = k;}
                if(matriz[j][k]=='F'){aux.first = j; aux.second = k; fire.push_back(aux);}
            }
		}
		//printf("\n");
		//printf("%d -- %d\n", t, m);

		int tam = bfs(x, y);
		if(tam)printf("%d\n", tam);
		else printf("IMPOSSIBLE\n");
	}

	return 0;
}
