#include<cstdio>

int main(){

    int n, c, m;
    int flag[101010], w[101010], v[101010], espec[101010];

    scanf("%d %d %d", &n, &c, &m);

    for(int i=0; i<101010; i++){flag[i]=0; espec[i]=0;}

    for(int i=0; i<c; i++){scanf("%d", &v[i]); espec[v[i]]++;}

    for(int i=0; i<m; i++)
    {
        scanf("%d", &w[i]);
        flag[w[i]]++;
    }

    for(int i=0; i<m; i++)
    {
        if(flag[w[i]]>=1 && espec[w[i]]==1)
        {
            c--;
            flag[w[i]]=0;
        }
    }
    printf("%d\n", c);

    return 0;

}
