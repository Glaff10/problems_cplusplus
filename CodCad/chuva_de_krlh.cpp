#include<cstdio>

int n, v[1010][1010], resul[1010][1010];

int main(){

    scanf("%d", &n);

    for(int i=0; i<n*2; i++){

        for(int j=0; j<n; j++){

            scanf("%d", &v[i][j]);
        }
    }

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            resul[i][j]=v[i][j]+v[i+n][j];
        }
    }

    for(int i=0; i<n; i++){

        for(int j=0; j<n; j++){

            printf("%d ", resul[i][j]);
        }
        printf("\n");
    }

    return 0;
}
