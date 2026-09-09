//Brute Force
#include <iostream>
using namespace std;
int main(){
    int arr[] ={3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int nge[n];
    for(int i=0;i<n;i++){
        nge[i]=-1;
        for(int j=1+i;j<n;j++){
            if(arr[j]>arr[i]){
                nge[i]=arr[j];
                break;
            }

        }
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<" ";
    }
    cout<<endl;//tc(n2)
}