#include<cstdio>
#include<cmath>
int main(){

    int x1, x2, y1, y2, cont, flag, aux1, aux2;
    while(1){

        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if(x1==x2 && x1==y1 && x1==y2 && x1==0)break;

        bool flag = false;

        if(x1==x2 && y1==y2){
            cont = 0;
            flag = true;
        }
        if((fabs(x1-x2)==fabs(y1-y2) || x1==x2 || y1==y2) && flag==false){
            cont = 1;
            flag = true;
        }

        if(!flag)cont=2;

        printf("%d\n", cont);

    }
    return 0;

}
