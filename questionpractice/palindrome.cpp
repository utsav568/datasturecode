#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string str){
    int i=0;
    int j = str.size()-1;
    while(i<=j){
        if(str[i]!=str[j])return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string str= "1331";
    cout<<ispalindrome(str);

}