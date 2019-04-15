#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y){

     return x.first<y.first;
}

vector<pair<int, int> > V;

int main(){

    int p, s;

    scanf("%d %d", &p, &s);

    for(int i=0; i<s; i++){
        pair<int, int> par;
        scanf("%d %d", &par.first, &par.second);
        V.push_back(par);
    }

    sort(V.begin(), V.end(), cmp);

    int zona = 10001;
    pair<int, int> par;
    par = V[0];
    int start = par.first;
    bool primeira = true;

    for(int i=0; i<s; i++){
        par = V[i];
        if(par.first<=zona){
            if(zona<par.second || primeira){zona = par.second; primeira = false;}
        }
        else {
            printf("%d %d\n", start, zona);
            start = par.first;
            zona = par.second;
        }
    }
    printf("%d %d\n", start, zona);

    return 0;
}
