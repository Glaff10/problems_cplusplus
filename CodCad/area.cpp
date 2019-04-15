#include<cstdio>

int main(){

    double a, b, c, d;

    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);

    if((a*b)>(c*d))printf("Primeiro\n");
    else if((a*b)==(c*d))printf("Empate\n");
    else printf("Segundo\n");

    return 0;
}
