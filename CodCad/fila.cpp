#include<cstdio>
#include<vector>
#include<set>
using namespace std;

int main(void){

    vector <int> v;
    int n, m;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }
    scanf("%d", &m);
    set <int> saiu;
    for(int i=0; i<m; i++){
        int id;
        scanf("%d", &id);
        saiu.insert(id);
    }

    int many=0;

    for(int i=0; i<n; i++){
        if(saiu.find(v[i])==saiu.end()){
            if(many++ > 0)printf(" ");
            printf("%d", v[i]);
        }
    }
    printf("\n");

    return 0;
}
