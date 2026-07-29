#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){//1,2,2,3,3,3,3,3,4,4,5,5,6,6
        cin>>arr[i];

    }
    int key;
    cin>>key;
    int n= sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==key){
            if(arr[mid-1]!=key){
                flag=true;
                cout<<mid;
                break;
            }
            else{
                high =  mid-1;
            }
        }
        else if(arr[mid]<key)low=mid+1;
        else high=mid-1;
    }
    if(flag==false)cout<<"notfound";
    

}