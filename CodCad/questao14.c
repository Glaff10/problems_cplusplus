#include<stdio.h>

void buscBin(int v[],int n,int chave){
    int i=0,f=n-1,meio;
    while(i<=f){
        meio = (i+f)/2;
        printf("%d ",v[meio]);
        if(chave<v[meio]){
            f = meio-1;
        }else if(chave > v[meio]){
            i = meio+1;
        }else{
            break;
        }
    }
    printf("\n");
}

int main(){
    int v[10] = {3,12,20,25,40,50,55,90,95,99};

    buscBin(v,10,4);
    buscBin(v,10,55);
}
