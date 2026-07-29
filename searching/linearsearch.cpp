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
        bool flag = false;
        int index = -1;
        int target ;
        cin>> target;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                flag = true;
                index = i;
                break;
            }

        }
        if(flag==true)
        cout<<"present at index = "<<index<<endl;
    else
    cout<<"notpresent";
    
}