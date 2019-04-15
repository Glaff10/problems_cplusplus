#include<cstdio>

int main(){
    int a, v[101010];
    scanf("%d", &a);

    for(int i=1; i<=a; i++)scanf("%d", &v[i]);
    v[0]=0;
    for(int i=1; i<=a; i++){
        int cont;
        cont = 0;
        if(v[i-1]==1)cont++;
        if(v[i+1]==1)cont++;
        if(v[i]==1)cont++;
        printf("%d\n", cont);
    }

    return 0;
}
