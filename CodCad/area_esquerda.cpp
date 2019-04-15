#include<cstdio>

int main(){
	char s;
	int i=1,j=0;
	double soma=0, v[100][100];

	scanf(" %c", &s);

	for(int l=0; l<12; l++){

		for(int k=0; k<12; k++)
			scanf("%lf", &v[l][k]);
	}

	while( i!=11){


    if(i<6)for(j=0; j<i; j++)soma += v[i][j];
    if(i==6)for(j=0; j<5; j++)soma += v[i][j];
    if(i>6)for(j=0; j<11-i; j++)soma += v[i][j];
		i++;

	}

	if(s=='S')printf("%.1lf\n", soma);
	else printf("%.1lf\n", soma/30);

	return 0;
}