#include <cstdio>

int main() {
  int a, b, c, d, cont, x, y;

  while(1){
    cont=0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if(a==0 && b==0 && c==0 && d==0)break;

    a*=60;
    c*=60;

    x= a+b;
    y= c+d;

    for(int i=x+1; i!=y; i++){
        cont++;
        if(i>60*24){i=0; cont--;}
    }

    printf("%d\n", cont+1);
  }

  return 0;
}
