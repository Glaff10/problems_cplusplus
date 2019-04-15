#include<cstdio>


int main(){

  int t, lvl, b;
  double ataq, def, F;
	scanf("%d", &t);

	for(int i=0; i<t; i++){

		scanf("%d", &b);

		scanf("%lf %lf %d", &ataq, &def, &lvl);

		if(!lvl%2){
			F= ((ataq+def)/2)+b;
		} 
		else F = (ataq+def)/2;

		scanf("%lf %lf %d", &ataq, &def, &lvl);

		if(!lvl%2){
			if(((ataq+def)/2)+b > F){printf("Guarte\n");
			continue;}
			else{ 
				if(((ataq+def)/2)+b == F){
					printf("Empante\n");
					continue;
				}
				else {
					printf("Dabriel\n");
					continue;
				}
			}
		}
		else{
      	if(((ataq+def)/2)> F){printf("Guarte\n"); continue;}
			else if(((ataq+def)/2)!=F){printf("Dabriel\n");	
		  	      continue;
            }
		}

		printf("Empate\n");

	}
  return 0;
}