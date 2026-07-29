#include <bits/stdc++.h>
using namespace std;

int main() {
	string str ;
    cout<<"enter the input";
    cin>>str;
    getline(cin,str);
    int n = str.length();
    reverse(str.begin(),str.begin()+n/2);
    cout<<"AnSweris"<<str<<endl;
}