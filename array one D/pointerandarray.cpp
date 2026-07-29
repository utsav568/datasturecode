#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,5,56,7,8};
    int *ptr = arr;
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    int *ptr1=&arr[0];
    cout<<ptr1<<endl;
    ptr[0]=9;
    for(int i=0;i<=4;i++){
        cout<<ptr[i]<<" ";//i[ptr] is also valid or i[arr]
        
    }
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}