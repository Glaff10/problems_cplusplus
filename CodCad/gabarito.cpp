#include<bits/stdc++.h>

using namespace std;

int main(){

	int n, freq[100];

	char bin[10101], pal[1010][1010];

	scanf("%d", &n);

	scanf(" %s", bin);
	
	int m;
	scanf("%d", &m);

	for(int i=0; i<m; i++)
		scanf(" %s", pal[i]);

	int cont = 0;

	for(int i=0; i<n; i++){
		memset(freq, 0, sizeof(freq));
		int maior = 0;
		for(int j=0; j<m; j++){
			if(pal[j][i]!=bin[i])
				freq[pal[j][i]-65]++;
			if(freq[pal[j][i]-65]>maior)
				maior = freq[pal[j][i]-65];
		}
		cont += maior;	
	}

	printf("%d\n", cont);

	return 0;
}
