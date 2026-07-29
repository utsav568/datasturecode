#include <bits/stdc++.h>
using namespace std;
void sort1(vector<int> &v){
    int t= v.size();
    int noo =0;
    int noz =0;
    for(int i=0;i<t;i++){
        if(v[i]==0)noz++;
    
    
    else noo++;
    
    }
    for(int i=0;i<t;i++){
        if(i<noz)v[i]=0;
        else v[i]=1;
    }
 
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
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort1(v);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}