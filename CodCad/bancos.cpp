#include<cstdio>

int main(){

    int a, b, c, d, v[1010], quant;
    bool flag;

    while(1){
    scanf("%d %d", &a, &b);

    if(a==0 && b==0)break;

    for(int i=1; i<=a; i++)scanf("%d", &v[i]);

    for(int i=1; i<=b; i++){
        scanf("%d %d %d", &c, &d, &quant);
        v[c]-=quant;
        v[d]+=quant;
        }

    flag = true;

    for(int i=1; i<=b; i++)if(v[i]<0)flag = false;

    if(flag)printf("S\n");
    else printf("N\n");

    }

    return 0;
}
