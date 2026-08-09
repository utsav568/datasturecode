#include <bits/stdc++.h>
using namespace std;
//bruteforce method
int main(){
int arr[]={5,1,8,2,3};
int n = sizeof(arr)/4;
int count =0;
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j])count++;
    }
}
cout<<count;
}