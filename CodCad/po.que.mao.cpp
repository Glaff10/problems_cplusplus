#include<cstdio>
#include<vector>
#include<algorithm>

int main(){

    std::vector<int> v;
    int n, cont = 0;

    scanf("%d", &n);

    for(int i=0; i<3; i++){

        int x;
        scanf("%d", &x);
        v.push_back(x);

    }

    std::sort(v.begin(), v.end());

    for(int i=0; i<3; i++)
        if(n-v[i]>=0){
            cont++;
            n=n-v[i];
        }

    printf("%d\n", cont);
    return 0;

}
