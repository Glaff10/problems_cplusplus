#include<cstdio>

int main(){

    int n;

    while(scanf("%d", &n) && n){
        int v[101010];

        for(int i=0; i<n; i++)scanf("%d", &v[i]);
        v[n]=0;

        long long int t = 0;
        for(int i=1; i<=n; i++){
            if(v[i-1]<0){
                t+=(-1)*v[i-1];
            }else t+=v[i-1];

            v[i]+=v[i-1];
        }

        printf("%lli\n", t);
    }

    return 0;
}
