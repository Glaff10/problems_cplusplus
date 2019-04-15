#include<cstdio>
#include<algorithm>
#include<functional>
#include<cstring>

typedef struct produto{

	int val, peso;

}produto;

produto prod[101010];
int cap[101010], dp[101][1001], t;

int mochila(int cap, int i){

	if(i==t || cap==0)
		return 0;

	if(dp[cap][i]!=-1)return dp[cap][i];

	if(prod[i].peso>cap)dp[cap][i] = mochila(cap, i+1);
	else dp[cap][i] = std::max(prod[i].val + mochila(cap-prod[i].peso, i+1), mochila(cap, i+1));

	return dp[cap][i];
}

int main(){
	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		int l;

		scanf(" %d", &t);

		for(int j=0; j<t; j++)scanf(" %d %d", &prod[j].val, &prod[j].peso);

		scanf(" %d", &l);

		for(int j=0; j<l; j++)scanf(" %d", &cap[j]);

        int soma = 0;

		for(int j=0; j<l; j++){
			memset(dp, -1, sizeof(dp));
			//printf("Passei aqui\n");
			soma += mochila(cap[j], 0);
		}

		printf("%d\n", soma);

	}

	return 0;

}
