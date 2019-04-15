#include<cstdio>
#include<cstring>

bool onze(char v[]){

    char S[101010];
    int n = strlen(v)-1;
    if(n+1==2){
        if(!(((S[n-1]-'0')*10+S[n]-'0')%11))return true;
        return false;
    }





}

int main(){

    char S[101010];

    int soma = 0;
    int x=0;
    scanf(" %[^\n]s", S);

    int n = strlen(S)-1;
    if(n>0)x = ((S[n-1]-'0')*10)+S[n]-'0';
    //printf("%d\n", n);
    if(!(x%4))printf("S\n");
    else printf("N\n");

    for(int i=0; i<=n; i++)soma+=S[i]-'0';

    if(!(soma%9))printf("S\n");
    else printf("N\n");

    if(!x || x==25 || x==50 || x==75)printf("S\n");
    else printf("N\n");

    return 0;
}
