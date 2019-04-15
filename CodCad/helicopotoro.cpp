#include<cstdio>

int main(void){
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    while(1){
    if(c==a){printf("S\n"); break;}
    if(c==b){printf("N\n"); break;}
    c=c+d;
    if(c<0)c=15;
    if(c>15)c=0;
    }

    return 0;
}
