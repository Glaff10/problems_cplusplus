#include<cstdio>
#include<cstring>
#include<vector>
int main(){

    std::vector<char> v;
    char s[1010];

    scanf(" %[^\n]s", s);

    for(int i=0; i<strlen(s); i++){

        if(s[i]==97 || s[i]==101 || s[i]==105 || s[i]==111 || s[i]==117)v.push_back(s[i]);

    }
    int i=0, j = (int)v.size()-1;

    bool flag = true;

    while(i<=v.size()-1 && j>=0){

        //printf("%c %c\n\n", v[i], v[j]);
        if(v[i]!=v[j])flag = false;
        i++;
        j--;

    }

    if(flag)printf("S\n");
    else printf("N\n");

    return 0;
}
