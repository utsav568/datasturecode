#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    int t =10;
    //cin>>t;
    for(int i=0;i<n;i++){
        if(arr[i]>t){
            cout<<"lowerbound is="<<arr[i-1];
            //or upperbound arr[i]
            break;
        }
    }
 }
 //tc=O(n square)