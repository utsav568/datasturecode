#include <iostream>
using namespace std;
int main(){
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n = sizeof(arr)/4;
    int idxsum = n*(n+1)/2;
    int sum =0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<idxsum-sum;
}