#include <bits/stdc++.h>
using namespace std;
void remove(int arr[] ,vector<int>&v,int n,int idx){
    if(idx==n){
        return;
    }
    int a = arr[idx];
    if(a==1)remove(arr,v,n,idx+1);
    else {
        v.push_back(a);
        remove(arr,v,n,idx+1);
    }
}

int main() {
int arr[] ={1,2,3,1,2};
int n = sizeof(arr)/4;
vector<int>v ;
remove(arr,v,n,0);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

}