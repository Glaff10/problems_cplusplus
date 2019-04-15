#include<cstdio>

int main(){
	
	int n;

	while(scanf("%d", &n) && n){
		long long soma=0, v[101011];

		for(int i=0; i<n; i++)scanf("%d", &v[i]);

		for(int i=0; i<n; i++){

			if(v[i]==0)continue;

			if(v[i]>0){ 

				for(int j=i+1; j<n; j++){
					if(v[j]<0){
						
						if(v[i]-v[j]>0){
							v[i]=v[i]-v[j];
							v[j]=0;
							soma+=j-i;
						}
						else{if(v[i]-v[j]<0){
								v[j]=v[i]-v[j];
								v[i]=0;
								soma+=j-i;
							   }
							   else{
							   	 v[j]=0;
								 v[i]=0;
							     soma+=j-i;
							   }
							}
					}
				}

			}
			else{

				for(int j=i+1; j<n; j++){
					if(v[j]>0){
						
						if(v[i]+v[j]>0){
							v[j]=v[i]+v[j];
							v[i]=0;
							soma+=j-i;
						}
						else{if(v[i]+v[j]<0){
								v[i]=v[i]+v[j];
								v[j]=0;
								soma+=j-i;
							   }
							   else{
							   	 v[j]=0;
								 v[i]=0;
							     soma+=j-i;
							   }
							}
					}
				}

			}

		}
		printf("%d\n", soma);
	}


	return 0;
}