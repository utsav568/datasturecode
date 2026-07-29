#include <bits/stdc++.h>
using namespace std;

int main() {
	string s ="ABCZEXYJK";
    string str =" ";
   // int n = s.size();
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    cout<<str;
    cout<<endl;
    for(int i=0;i<str.size()-2;i++){
        for(int j=0;j<str.size()-1;j++){
            if(str[j]<str[j+1]){
                char temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    for(int i=0;i<str.size();i++){

        cout<<str[i];
    }

}