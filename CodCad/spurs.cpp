#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;


struct Time{

    double recebido;
    double feito;
    double cesta;
    int ponto;
    int num;

};

bool des(Time x, Time y){

    if(x.ponto!=y.ponto)return x.ponto<y.ponto;

    if(x.cesta!=y.cesta)return x.cesta<y.cesta;

    if(x.feito!=y.feito)return x.feito<y.feito;

    if(x.num != y.num)return x.num < y.num;

}

int main(){

    int cont = 0;
    int n;
    Time time[150];

    while(1){

         scanf("%d", &n);

        if(n==0)break;

        for(int i = 0; i<n; i++){
          time[i].ponto = 0;
          time[i].cesta = 0;
          time[i].feito = 0;
          time[i].recebido = 0;
          time[i].num = i;
        }

        int p = n*(n-1)/2;

        for(int i=0; i<p; i++){
            int x, y;
            int r, o;
            scanf("%d %d %d %d", &x, &r, &y, &o);

            time[x-1].feito+=r;
            time[y-1].feito+=o;
            time[x-1].recebido+=o;
            time[y-1].recebido+=r;

            if(r>o){
                time[x-1].ponto+=2;
                time[y-1].ponto++;
            }
            else{
                time[y-1].ponto+=2;
                time[x-1].ponto++;
            }
        }

        for(int i=0; i<n; i++){
          if(time[i].recebido!=0)time[i].cesta = time[i].feito/time[i].recebido;
          else time[i].cesta = time[i].feito;


        }

        sort(time, time+n, des);

        cont++;

        if(cont!=1)printf("\nInstancia %d\n", cont);
        else printf("Instancia %d\n", cont);
        for(int i=n-1; i>=0; i--){
          if(i==n-1)printf("%d", time[i].num+1);
          else printf(" %d", time[i].num+1);
          if(i==0)printf("\n");
          }
    }

    return 0;
}
