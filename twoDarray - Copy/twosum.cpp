#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=v.size()-2;i++){
        for(int j=1+i;j<=v.size();j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<" "<<j<<")"<<endl;
            }
        }
    }
}