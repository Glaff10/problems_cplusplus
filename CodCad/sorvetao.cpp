#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>

int main(){
    int tam, n;
    std::vector< std::pair<int, int> > v;

    scanf("%d %d", &tam, &n);

    for(int i=0; i<n; i++){
        std::pair<int, int> tmp;
        int ini, fim;
        scanf("%d %d", &tmp.first, &tmp.second);

        v.push_back(tmp);
    }

    std::sort(v.begin(), v.end());

    std::pair<int, int> res;
    res.first = v[0].first;
    res.second = -1;

    for(int i=0; i<n-1; i++){

        if(v[i].first<=res.second && v[i].second>res.second)res.second = v[i].second;
        else{
            printf("%d %d\n", res.first, res.second);
            res.first = v[i].first;
            res.second = v[i].second;
        }

    }


    return 0;
}
