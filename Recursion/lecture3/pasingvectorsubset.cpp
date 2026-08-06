#include <bits/stdc++.h>
using namespace std;
void subset(string str ,string ans,vector<string>&v,int idx,int n){
    if(idx==n){
        v.push_back(ans);
        return;
        
    }
    char ch = str[idx];
    subset(str ,ans+ch,v,idx+1,n);
    subset(str,ans,v,idx+1,n);
    
}

int main() {
string str ="abc";
int n = str.length();
vector<string> v;
subset(str,"",v,0,n);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

}
