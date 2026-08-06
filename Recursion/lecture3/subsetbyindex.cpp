#include <bits/stdc++.h>
using namespace std;
void subset(string str ,string ans,int idx,int n){
    if(idx==n){
        cout<<ans<<endl;
        return;
        
    }
    char ch = str[idx];
    subset(str ,ans+ch,idx+1,n);
    subset(str,ans,idx+1,n);
    
}

int main() {
string str ="abc";
int n = str.length();
subset(str,"",0,n);

}
