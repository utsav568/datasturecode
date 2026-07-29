#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int n= sizeof(arr)/4;
    for(int i=0;i<n;i++){
        if(arr[i]!=i){
            cout<<"the first smallest missing value is =" <<i;
            break;
        }
    }
} 
//tc = O(n) 
//Now to Solve Optimize O(logn) file name = smallestmissing2.cpp