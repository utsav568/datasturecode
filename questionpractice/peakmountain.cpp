#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    //int index =-1;
    int n =sizeof(arr)/4;
    for(int i=1;i<=n-2;i++){
        if(arr[i]>arr[i-1] and arr[i]>arr[i+1]){
            cout<<"the peak index is =  "<<i;
            break;
                }
    }
}