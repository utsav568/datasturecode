#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
void reversepart(int i,int j,vector<int> &v){
    while(i<=j){
        int temp = v[i];
    v[i]=v[j];
    v[j]=temp;
    j--;
    i++;
}
    return;
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
    
    reversepart(0,3,v);
    display(v);
    
}