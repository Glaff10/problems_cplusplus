#include <cstdio>
#include <cstring>

int main(){

    char c[10100];
    int cont = 0;

    scanf("%s", c);

    for(int i=0; i<strlen(c); i++){
        cont += c[i]-'0';
    }

    printf("%d\n", cont%3);

    return 0;
}
