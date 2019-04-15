#include<cstdio>

int main(){
    int n, a=0, v[101010], soma=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", &v[i]);
        soma+=v[i];
    }

    int i = 0;
    while(a<soma/2){
        a+=v[i];
        i++;
    }
    printf("%d\n", i);
    return 0;
}
