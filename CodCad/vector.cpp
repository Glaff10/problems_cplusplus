#include<bits/stdc++.h>
#define pb push_back

int main(){
	
	int n;	

	std::vector<int> fila;

	scanf("%d", &n);
	for(int i=0; i<n; i++){

		int x;
		scanf("%d", &x);

		fila.pb(x);

	}
	int ant=10101;
	bool flag = true;
	for(int i=0; i<n-1; i++){

		if(ant>abs(fila[i+1]-fila[i]))flag = false;
			
	}

	if(flag)printf("Jolly\n");
	else printf("Not jolly\n");
	
	return 0;
}