#include<cstdio>
#include<vector>
#include<set>
#include<iostream>

using namespace std;

int n, m;

vector<int> v[100100];

int main(){

    scanf("%d %d", &n, &m);

    for(int i=1; i<=m; i++){
        int t, x, y;
        scanf("%d %d %d", &t, &x, &y);

        if(t==1)
        {
            v[x].push_back(y);
            v[y].push_back(x);
        }
        else{
            bool flag=false;
            if((int)v[x].size()==0){printf("0\n"); flag = true;}
            for(int j=0; j<(int)v[x].size(); j++){
                if(v[x][j]==y){
                    printf("1\n");
                    flag = true;
                    break;
                }
            }
            if(!flag)printf("0\n");
        }

    }
    return 0;
}
