#include<cstdio>
int main(){
    int v[101010], n, m, a;

    scanf("%d", &n);

    for(int i=0; i<n; i++){

        scanf("%d", &m);

        for(int j=0; j<m; j++){
            scanf("%d", &a);
            if(a==1)printf("Rolien\n");
            else if(a==2)printf("Naej\n");
                 else if(a==3)printf("Elehcim\n");
                      else if(a==4)printf("Odranoel\n");
        }

    }
    return 0;
}
