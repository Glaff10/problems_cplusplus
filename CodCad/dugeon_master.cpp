#include<bits/stdc++.h>

using namespace std;

typedef struct maze{

    int x, y, z;

}maze;

int matriz[101][101][101], dist[101][101][101];

int bfs(int z, int x, int y){

    int _x[] = {0, 1, 0, -1, 0, 0}, _y[] = {1, 0, -1, 0, 0, 0}, _z[] = {0, 0, 0, 0, 1, -1};

    queue<maze> fila;

    maze aux;
    aux.x = x; aux.y = y; aux.z = z;

    fila.push(aux);

    while(!fila.empty()){

        int n = (int)fila.size();
        bool passou = false;

        for(int j=0; j<n; j++){
            maze v = fila.front();
            fila.pop();
            for(int i=0; i<6; i++){
                if((matriz[v.z+_z[i]][v.x+_x[i]][v.y+_y[i]]=='.' || matriz[v.z+_z[i]][v.x+_x[i]][v.y+_y[i]]=='E') && !dist[v.z+_z[i]][v.x+_x[i]][v.y+_y[i]]){
                    passou=true;
                    dist[v.z+_z[i]][v.x+_x[i]][v.y+_y[i]] = dist[v.z][v.x][v.y]+1;

                    if(matriz[v.z+_z[i]][v.x+_x[i]][v.y+_y[i]] == 'E')return dist[v.z][v.x][v.y]+1;

                    aux.z = v.z+_z[i]; aux.x = v.x+_x[i]; aux.y = v.y+_y[i];
                    fila.push(aux);
                }
            }
        }

        if(!passou)return 0;
    }
}

int main(){

    int a, b, c, x, y, z;


    while(scanf("%d %d %d", &a, &b, &c) && a && b && c){

        memset(dist, 0, sizeof(dist));

        for(int i = 0; i<100; i++){

            for(int j=0; j<100; j++){

                for(int k=0; k<100; k++){
                    matriz[i][j][k] = 'o';
                }
            }
        }

        for(int i = 1; i<=a; i++){

            for(int j=1; j<=b; j++){

                for(int k=1; k<=c; k++){

                    scanf(" %c", &matriz[i][j][k]);
                    if(matriz[i][j][k] == 'S'){ z = i; x = j; y = k;}
                }

            }

        }

        int tam = bfs(z, x, y);

        if(tam)printf("Escaped in %d minute(s).\n", tam);
        else printf("Trapped!\n");

    }


    return 0;
}
