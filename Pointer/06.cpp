#include <bits/stdc++.h>
using namespace std;
void fun(int *ptr ,int x){
    
    for(int i=0;i<x;i++){
        
        cout<<ptr[i]<<" ";
     
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x = sizeof(arr)/4;
   
    fun(arr ,x);
}
