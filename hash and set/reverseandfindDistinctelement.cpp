#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
    int r =0;
    while(n>0){
        r*=10;
        r+=(n%10);
        n/=10;
    }
    return r;
}
int main() {
    int x;
    cin>>x;
    vector<int> s(x);
    for(int i=0;i<x;i++){
        cin>>s[i];
    }
    int n = s.size();
    for(int i=0;i<n;i++){
        int rev = reverse(s[i]);
        s.push_back(rev);
    }


    unordered_set<int> y;
    for(int i=0;i<n;i++){
        y.insert(s[i]);
    }
    cout<<y.size();
}