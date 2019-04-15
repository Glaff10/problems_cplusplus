#include<bits/stdc++.h>


int main(){
	
	int v[10], maior=0, _maior;

	for(int i=0; i<4; i++)scanf("%d", &v[i]);

	for(int i=0; i<4; i++)maior = std::max(maior, v[i]);

	for(int i=0; i<4; i++){

		if(v[i]!=maior)_maior=std::max(_maior, v[i]);
	}

	maior = std::min(_maior, maior);

	printf("%d\n", maior*2);

	return 0;
}