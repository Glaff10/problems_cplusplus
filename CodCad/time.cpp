#include<cstdio>
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;


int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    vector<pair<string, int> > v;

    pair<string, int> temp;
    for(int i=0; i<n; i++){
        setbuf(stdin, NULL);
        cin>>temp.first;
        scanf(" %d", &temp.second);
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), greater<int>());

    int a = n/m;
    int b = n%m;
    int j = 0;
    int k = 0;
    printf("Time %d\n", k);
    for(int i=0; i<(a*m)+b; i++){
        if(j==a){
            b--;
            printf("Time %d\n", k++);
        }
        cout<<v[i].first;

    }
}
