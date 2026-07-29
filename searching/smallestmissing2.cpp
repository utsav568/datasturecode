#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
        //0,1,2,34,5,6,9,12

    }
    
    int n= sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high = n-1;
    int ans =-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==mid)low=mid+1;
        else{
            ans=mid;
            high = mid -1;

        }
    }
    cout<<ans;
    if(ans==-1)cout<<"not missing";
}
//tc = O(logn)