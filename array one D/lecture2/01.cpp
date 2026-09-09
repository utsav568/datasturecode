#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/4;
    int *ptr = arr;
    for(int i=0;i<n;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
      cout<<endl;
    ptr =arr;
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<" ";
        
    }
  

    ptr = arr;
    *ptr =5;//pointing 1 element
    ptr++;//ptr is pointing second element
    *ptr =90;//ptr[2]=90
    ptr--;
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<i[ptr]<<" ";//i[arr]
        ptr++;
    }


}