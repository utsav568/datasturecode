#include <bits/stdc++.h>
using namespace std;
void gen(string s ,int open,int close,int n){
if(close==n){
    cout<<s<<endl;
    return;
}
if(open<n) gen(s+'(',open+1,close,n);

if(close<open)gen(s+')',open,close+1,n);
}
int main(){
    int n =3;
    gen("",0,0,n);
    
}