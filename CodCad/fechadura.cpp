#include<cstdio>
#include<cmath>
#include<cstdlib>

int main(){
    int n, l, a[10100];
    scanf("%d %d", &n, &l);

    for(int i=0; i<n; i++)scanf("%d", &a[i]);

    int cont =0;

    for(int i=0; i<n; i++){

        cont+= abs(l-a[i]);
        if(a[i]!=a[i+1])a[i+1]+=l-a[i];
        else i++;
    }

    printf("%d\n", cont);

    return 0;
}
