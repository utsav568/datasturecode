#include <bits/stdc++.h>
using namespace std;
void binary(string s ,int n){
    if(n==s.length()){
        cout<<s<<endl;

        return;
    }
    binary(s+'0',n);
    if(s=="" || s[s.length()-1]=='0') binary(s+'1',n);
    

}
int main(){
   int n = 3;
   binary("" , n);
}//ignore consective 1;