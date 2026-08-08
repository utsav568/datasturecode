#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string s,int i,int j){
    if(i>j)return true;
    if(s[i]!=s[j])return false;
    else return ispalindrome(s,i+1,j-1);
    
}
int main(){
    string str= "1331";
    cout<<ispalindrome(str,0,str.length()-1);

}