#include<cstdio>
#include<algorithm>

using namespace std;

int cont[1010101], n, m;
int aux[1010101];
int main(){
    int conta;
    conta=0;
    while(scanf("%d %d", &n, &m)==2 && m!=0){
    conta++;
    for(int i=0; i<n; i++){
        aux[i]=0;
        cont[i]=0;
    }

    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);

        aux[a-1]++;
        aux[b-1]++;
        cont[a-1]++;
        cont[b-1]++;
    }

    sort(cont, cont+n);

    printf("Teste %d\n", conta);

    for(int i=0; i<n; i++){
        if(aux[i]==cont[n-1])printf("%d ", i+1);
    }
    printf("\n");
}
    return 0;
}
