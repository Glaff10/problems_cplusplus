#include<cstdio>
#include<algorithm>
#include<functional>
#include<cstring>

typedef struct produto{

  int val, peso;

}produto;


produto prod[101010];

int dp[100][110], n, m;

int pd(int cap, int i=0){

  if(i==n || cap == 0 )return 0;

  if(dp[cap][i] != -1)return dp[cap][i];


  if(prod[i].peso>cap)dp[cap][i] = pd(cap, i+1);
  else dp[cap][i] = std::max(prod[i].val + pd(cap-prod[i].peso, i+1), pd(cap, i+1));

  return dp[cap][i];
}

int main(){
    
  while(scanf("%d %d", &n, &m) != EOF){
  
    for(int i=0; i<n; i++)scanf("%d %d", &prod[i].val, &prod[i].peso);


    memset(dp, -1, sizeof(dp));
    int x = pd(m, 0);

    printf("%d\n", x);
  }

  return 0;
}