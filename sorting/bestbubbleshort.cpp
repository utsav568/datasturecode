#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
    cout<<"enter the size:";
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        bool flag =true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = false;
                //swap(arr[j],arr[j+15])
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<"sorting is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}