#include <bits/stdc++.h>
using namespace std;

int main() {
int x;
cin>>x;
int arr[x];
for(int i=0;i<x;i++){//2,4,11,13,14
    cin>>arr[i];
}
int n = sizeof(arr)/4;
int key =12;
int low = 0;
int high = n-1;
bool flag = false;
while(low<=high){
    int mid  = low+(high-low)/2;
    if(arr[mid]==key){
        cout<<arr[mid-1];
        flag = true;
        break;
    }
    else if(arr[mid]<key)low = mid+1;
    else high = mid -1;
}
if(flag==false)cout<<arr[low];

}