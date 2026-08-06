#include <bits/stdc++.h>
using namespace std;

int main() {
char ch;
cin>>ch;
if(ch>='a' and ch<='z'){
    cout<<ch<<" is a alphabet";
}
else if(ch>='0' and ch<='9'){
    cout<<ch<<" is a digit";
}
else cout<<"special character";
}
