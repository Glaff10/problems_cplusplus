#include<cstdio>
#define MAX 1000010
int main(){

    long long int n, cont[MAX], a, v[MAX];

    scanf("%lli", &n);

    a=n;

    for(int i=0; i<MAX; i++)cont[i]=0;

    for(int i=0; i<n; i++){
        scanf("%lli", &v[i]);
        cont[v[i]]++;
    }

    for(int i=0; i<n; i++){
        if(cont[v[i]]>1){a=a-cont[v[i]]+1; cont[v[i]]=1;}
    }

    printf("%lli\n", a);

    return 0;
}
