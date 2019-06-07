#include<cstdio>

int main(){

	unsigned long long int a, b;

	while(scanf("%llu %llu", &a, &b)!=EOF){

		unsigned long long int resp = a ^ b;

		printf("%llu\n", resp);
	}
}
