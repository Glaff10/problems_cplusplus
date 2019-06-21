#include<bits/stdc++.h>

int main(){

	int a, b, n, v[101010];

	scanf("%d %d %d", &a, &b, &n);

	v[0] = 0;
	for(int i=1; i<=n; i++)scanf("%d", &v[i]);

	if(v[1]<(a+b))b-= (a+b) - v[1];
	
	int cont = 0;

	for(int i=1; i<n; i++){	
		if(a>v[i])break;
		if(a>v[i+1])break;
		//printf("%d %d\n",a+b, v[i+1] );
		if(v[i+1]<a+b){
			b-= (a+b) - v[i+1];
			cont++;
		}
	}

	printf("%d\n", cont);

	return 0;
}
