#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

int m,n;
vector<int> v;

bool ord(int x, int y){

    if(x%m<y%m || (x%m==y%m && (double)x/m<(double)y/m)){
    printf("--%d--%d--%d--\n", x,m%x,m/x);
    printf("--%d--%d--%d--\n", y,m%y,m/y);

    return x;
    }

    return y;

}

int main(){

    scanf("%d %d", &n, &m);

    for(int i=0; i<n; i++){
        int x;
        scanf("%d", &x);
        v.push_back(x);
    }

    sort(v.begin(), v.end(), ord);

    for(int i=0; i<n; i++)printf("%d ", v[i]);

    printf("\n");

    return 0;
}
