#include<cstdio>
#include<cstring>
#include<algorithm>
#include <functional>

using namespace std;

int main(){

    char s;
    int cont = 0;
    while(scanf("%c", &s)!=EOF){
        if(s=='"' && !cont){
            printf("``");
            cont = 1;
            continue;
        }
        if(s=='"' && cont){
            printf("''");
            cont = 0;
            continue;
        }

        printf("%c", s);
    }

    return 0;
}
