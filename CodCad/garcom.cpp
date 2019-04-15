#include<cstdio>

int main(){

    int n, l, c, som;

    scanf("%d", &n);

    som = 0;
    for(int i = 0; i<n; i++){
        scanf("%d %d", &l, &c);
        if(l>c)som+=c;
    }

    printf("%d\n", som);

    return 0;

}
