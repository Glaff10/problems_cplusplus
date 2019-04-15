#include<cstdio>
#include<algorithm>

struct consulta{

    int ini;
    int fim;
};
consulta compromisso[100101];

bool cmp(consulta x, consulta y){

    return x.fim<y.fim;
}
int main(){
    int n, hora, cont=0;
    scanf("%d", &n);
    hora = 0;
    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &compromisso[i].ini, &compromisso[i].fim);
    }

    std::sort(compromisso, compromisso+n, cmp);

    for(int i=0; i<n; i++){

        if(compromisso[i].ini>=hora){
            cont++;
            hora = compromisso[i].fim;
        }

    }
    printf("%d\n", cont);

}
