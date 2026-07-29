#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>v2(v.size());

    for(int i=0;i<v2.size();i++){
        int j= v.size()-1-i;
        v2[i]=v[j];
    
    }
    display(v2);



}