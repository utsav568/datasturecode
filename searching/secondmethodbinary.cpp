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
    int low =0;
    int high = n-1;
    int key ;
    cin>>key;
    
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==key){
            cout<<"index = "<< mid;
           
            break;
        }
        else if(arr[mid]<key)low = mid+1;
        else high=mid-1;
    }
    
}