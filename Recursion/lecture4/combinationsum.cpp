#include <bits/stdc++.h>
using namespace std;
void comb(vector<int> v ,int arr[],int n,int t){
    if(t==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }

    if(t<0)return;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
        comb(v,arr,n,t-arr[i]);
        v.pop_back();
    }
}
int main(){
    int arr[] ={2,3,5};
    vector<int> v;
    int n = sizeof(arr)/4;
    int t =8;
    comb(v,arr,n,t);
}
//all posible permutation comes to make target 8