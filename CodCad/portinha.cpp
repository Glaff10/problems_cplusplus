#include<cstdio>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);
    if(a==0)printf("C\n");
    else if(a==1 && b==0)printf("B\n");
    else printf("A\n");

    return 0;
}
