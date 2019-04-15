#include<cstdio>
int main(){

    int n, v[101010], cont=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)scanf("%d", &v[i]);

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]==v[j] && v[j]!=-1){
            cont++;
            v[j]=-1;
            }
        }
        v[i]=-1;
    }
    printf("%d\n", n-cont);
}
