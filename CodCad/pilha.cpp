#include<bits/stdc++.h>

using namespace std;

int main(){

    string expre;
    int n;

    scanf("%d", &n);

    for(int j=0; j<n; j++){

         stack<char> paren;
         stack<char> colc;
         stack<char> chave;

         bool ok = true;

         cin>>expre;

         for(int i=0; i<(int)expre.size(); i++){
            if(expre[i]=='('){
                paren.push('(');
            }
            else if(expre[i]==')'){
                    if(paren.empty()){ok = false; break;}
                    if(paren.top()=='('){
                    paren.pop();
                    }else{
                        ok = false;
                        break;
                    }
            }
            if(expre[i]=='['){
                colc.push('[');
            }
            else if(expre[i]==']'){
                    if(colc.empty()){ok = false; break;}
                    if(colc.top()=='['){
                    colc.pop();
                    }else{
                        ok = false;
                        break;
                    }
            }
            if(expre[i]=='{'){
                chave.push('{');
            }
            else if(expre[i]=='}'){
                    if(chave.empty()){ok = false; break;}
                    if(chave.top()=='{'){
                    chave.pop();
                    }else{
                        ok = false;
                        break;
                    }
            }

         }
         if(!paren.empty() || !chave.empty() || !colc.empty())ok = false;

         if(ok)printf("Yes\n");
         else printf("No\n");
    }

    return 0;
}
