#include<cstdio>

int main(){

    char c;
    int a, b, n;


    scanf("%d", &n);
    scanf("%d %c %d", &a, &c, &b);

    if(c=='*'){if(a*b>n)printf("OVERFLOW\n"); else printf("OK\n");}
    else {if(a+b>n)printf("OVERFLOW\n"); else printf("OK\n");}
    return 0;
}
