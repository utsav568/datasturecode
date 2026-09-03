#include <bits/stdc++.h>
using namespace std;
void fun(int arr[]){
    cout<<arr<<endl;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<&arr[0]<<endl;
    cout<<&arr[1]<<endl;
    fun(arr);
}
//proof the adres pas hota h array ke 1 element ke first bite ka