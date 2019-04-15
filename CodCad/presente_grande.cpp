#include<bits/stdc++.h>

using namespace std;

typedef struct par{

	int first;
	long long int second;
};
par p[101010];


bool cmp(par x, par y){

	if(x.second == y.second)return x.first < y.first;
	return x.second>y.second;
}

int main(){

	long long int l, a, pi;
    int t, k, n;
    scanf("%d", &t);

    for(int j=0; j<t; j++){
        scanf("%d %d", &n, &k);
        int V[101010];
        for(int i=0; i<n; i++){
          int id;

          scanf("%lld %lld %lld %lld", &id, &l, &a, &pi);
          //printf("passei por aqui\n");
          p[i].first = id;
          p[i].second = l*a*pi;
          //par.push_back({2,3});

        }

        sort(p, p+n, cmp);

        for(int i=0; i<k; i++){
        	V[i] = p[i].first;
        }

        sort(V, V+k);

        bool first = true;

        for(int i=0; i<k; i++){
        	if(first){printf("%d", V[i]); first = false;}
        	else printf(" %d", V[i]);
        }
        printf("\n");
    }

    return 0;
}
