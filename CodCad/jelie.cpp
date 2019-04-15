#include<cstdio>

int main(){

	char v[10];

	int n;

	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf(" %s", v);
		int prim = v[0]-'0', sec=v[2]-'0';

    //printf("%d -- %d\n\n", prim, sec);

		if(prim==sec){
			printf("%d\n", prim*sec);
			continue;
		}

		if(v[1]>='a' && v[1]<='z'){
			printf("%d\n", prim+sec);
      continue;
    }
		else printf("%d\n", sec-prim);
	}

  return 0;
}