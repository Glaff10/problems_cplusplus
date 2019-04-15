//Codigo de exemplo
#include<cstdio>

int main(){
  int a, b, c;

  scanf("%d %d", &b, &a);

  c=b;

  for(int i=0; i<a; i++){
      scanf("%d", &b);
      c+=b;
      if(c>=100)c=100;
      if(c<=0)c=0;
  }

  printf("%d\n", c);

  return 0;
}

