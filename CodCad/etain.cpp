#include<bits/stdc++.h>

using namespace std;


bool comp(pair<string, int> x, pair<string, int> y){

    if(x.second!=y.second)return x.second>y.second;

    return x.first<y.first;

}
int main(){

    int n;

    while(scanf("%d", &n) && n){
        map<string, int> M;
        //set<pair<int, string> > S;
        vector<pair<string, int> > V;
        double tot = 0;

        int cont = 0;

        string palavra = "";
        cin.ignore();

        for(int i=0; i<n; i++){
            string x;

            getline(cin, x);

            palavra+=x;

        }
        for(int i=0; i<palavra.size()-1; i++){
            string aux;
            aux = palavra[i];
            aux += palavra[i+1];
            M[aux]++;
            tot++;
        }

        for (map<string,int>::iterator it=M.begin(); it!=M.end(); ++it){

            pair<string, int> x;

            x.first = it->first;
            x.second = it->second;

           // S.insert(x);

           V.push_back(x);

            //cont++;
            //if(cont==5)break;
    }
        /*for(set<pair<int, string> >::iterator it=S.begin(); it!=S.end(); ++it){

            cont++;
            if(S.size() - cont <= 5) cout << it->second << " " << it->first << " " << it->first/tot << endl;
        }*/

        sort(V.begin(), V.end(), comp);

        for(int i=0; i<5; i++){
            pair<string, int> x;

            x = V[i];

            cout << x.first << " ";

            printf("%d %.6lf\n", x.second, x.second/tot);
        }

        cout << "\n";

    }

    return 0;
}
