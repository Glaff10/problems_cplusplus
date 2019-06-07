#include<bits/stdc++.h>

double dp[101010];

int main(){

	int n;

	scanf("%d", &n);

	for(int i=0; i<n; i++){

		memset(dp, 0, sizeof(dp));

		int a;

		scanf("%d", &a);

		dp[0] = 0;
		int bola = 1; 

		for(int j=0; j < a; j++){
			double x = sqrt(dp[j] + bola);
			int y = (int) x;

			if( x - y < 0.00001 || !(dp[j])) { dp[j]=bola; j = -1; bola++;}
		}

		printf("%d\n", bola-1);

	}

	return 0;
}
