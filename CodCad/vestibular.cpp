#include<cstdio>
#include<cstring>

int main(){

    char x[100], v[100];
    int n, cont=0;

    scanf("%d", &n);
    scanf(" %s", x);
    scanf(" %s", v);

    for(int i=0; i<n; i++){

        if(x[i]==v[i])cont++;
    }
    printf("%d\n", cont);
    return 0;
}
