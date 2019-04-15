#include<bits/stdc++.h>

int main(){

    char palavra[12];

    int cont = 3, ans=0, pot;

    while(1){

        if(cont == 0)break;

        setbuf(stdin, NULL);

        scanf(" %[^\n]s", palavra);

        //printf("oi\n");

        if(strcmp("caw caw", palavra)==0){
            printf("%d\n", ans);
            ans = 0;
            --cont;
        }else{
            pot = 2;
            for(int i=0; i<3; i++){
                if(palavra[i]=='*'){
                    ans += pow(2, pot);
                }
                pot--;
            }
        }
    }
    return 0;
}
