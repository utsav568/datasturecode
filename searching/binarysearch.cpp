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
    int low = 0;
    int high = n-1;
    int index =-1;
    int target;
    cin>>target;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==target){
            index = mid;
            break;
        }
        else if(arr[mid]>target)high =mid-1;
        else
        low = mid +1;
    }
    if(index!=-1){
        cout<<"elementpresentat="<<index;
    }
    else
    cout<<"not found";

}