#include <bits/stdc++.h>
using namespace std;
void subset(string ans,string str,vector<string>&v){
    if(str==""){
        v.push_back(ans);
        return;
    }
    char ch = str[0];
    subset(ans+ch ,str.substr(1),v);
    subset(ans ,str.substr(1),v);

}
int main(){
    string str = "abc";
    vector<string> v;
    subset("" , str,v);
    for(string ele : v){
        cout<<ele<<endl;
    }
}