#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>

#define MAX 10100

using namespace std;

vector<int> x[MAX];
int lista[MAX];
int nivel[MAX];
double filhos[MAX], compareceu[MAX];

void dfs(int z){

    for(int i=0; i<(int)x[z].size(); i++){
        int v = x[z][i];

        if(nivel[v]==-1){
            nivel[v] = nivel[z]+1;
            filhos[nivel[v]]++;
            dfs(v);
        }
    }

}

int main(void){

    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=0; i<MAX; i++){
        nivel[i]=-1;
        filhos[i]=0;
        compareceu[i]=0;
    }

    for(int i=0; i<n; i++){

        int r;
        scanf("%d", &r);
        x[r].push_back(i+1);
    }

    for(int i=0; i<m; i++)scanf("%d", &lista[i]);

    int numero_niveis = -1;
    for(int i = 0;i < n;i++){
		if(nivel[i] == -1){
			numero_niveis++;
			nivel[i] = numero_niveis;
			dfs(i);
		}
	}

    for(int i=0; i<m; i++)compareceu[nivel[lista[i]]]++;

    sort(nivel, nivel+n, greater<int>());

    //printf("%d %lf %lf\n", nivel[0], filhos[1], compareceu[1]);

    double x;

    for(int i=1; i<nivel[0]+1; i++){
        x = compareceu[i]/filhos[i];
        printf("%.2lf ", x*100);
    }

    printf("\n");

    return 0;
}
