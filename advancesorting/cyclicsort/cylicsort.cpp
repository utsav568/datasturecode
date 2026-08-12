#include <iostream>
using namespace std;
int main(){
    int arr[] ={4,1,6,2,5,3};
    int n = sizeof(arr)/4;
    //cyclic sorting
    int i=0;
    while(i<n){
        int idxele = arr[i]-1;
        if(i==idxele)i++;
        else swap(arr[i],arr[idxele]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}