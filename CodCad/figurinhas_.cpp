#include<bits/stdc++.h>

int mdc(int a, int b){
	int aux;
	if(a%b==0)return b;

	aux  =  b;
	b = a%b;
	a = aux;

	mdc(a,b);
}

int main(){
	int n, a, b;
	int resp;
	scanf("%d", &n);

	for(int i=0; i<n; i++)
	{	
		scanf("%d %d", &a, &b);

		resp = mdc(std::max(a, b), std::min(a,b));

		printf("%d\n", resp);
	}
	return 0;
}
