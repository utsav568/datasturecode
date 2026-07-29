#include <bits/stdc++.h>
using namespace std;
void nextpermutation(vector<int> &v){
    int n= v.size();
    int idx =-1;
    for(int i = n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx =i;
            break;
        }
        
    }
    if(idx==-1){
        reverse(v.begin(), v.end());
    }
    reverse(v.begin()+idx+1,v.end());
    int j =-1;
    for(int i= idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j=i;
            break;
        }
    }
    int temp = v[idx];
    v[idx]=v[j];
    v[j]=temp;
    
}

int main() {
    int t;
    cin>>t;
    vector<int> v;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        v.push_back(x);
        
    }
     nextpermutation(v);
     for(int i=0;i<t;i++){
         cout<<v[i]<<" ";
     }


}
