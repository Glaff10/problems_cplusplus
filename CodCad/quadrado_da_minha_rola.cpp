#include<cstdio>

bool flag = true;
int n, v[10101][10101];
int main(){

  scanf("%d", &n);

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++)scanf("%d", &v[i][j]);
  }

  int soma=0;

  for(int i=0; i<n; i++)soma+=v[0][i];

  for(int i=1; i<n; i++){
      int soma2=0, soma3=0;
      for(int j=0; j<n; j++){
          soma2+=v[i][j];
          soma3+=v[j][i];
    }

    if(soma2!=soma || soma3!=soma)flag=false;

  }
  int i=0, j=0, soma2=0, soma3=0, aux=n-1;
  while(i!=n && j!=n){
  soma2+=v[i][j];
  soma3+=v[aux][j];
  i++;
  j++;
  aux--;
  }

  if(soma2!=soma || soma3!=soma)flag=false;

  if(flag)printf("%d\n", soma);
  else printf("-1\n");

  return 0;
}
