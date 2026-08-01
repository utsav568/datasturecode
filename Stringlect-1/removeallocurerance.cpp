#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='a')continue;//if(s[i]!=a)s+=s[i];
        else cout<<s[i];
    }
}