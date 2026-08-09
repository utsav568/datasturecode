#include <bits/stdc++.h>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
     int i=0;
    int j=0;
    int k=0;
    while(i<a.size() and j<b.size()){
        if(a[i]<b[j]){
            res[k]=a[i];//res[k++]=a[i++]
            k++;
            i++;
        }
        else{
            res[k]=b[j];//res[k++]=b[j++]
            k++;
            j++;
        }
    }
    if(i==a.size()){
        while(j<b.size()){
        res[k]=b[j];
        k++;
        j++;
    }
}
else{
    if(j==b.size()){
        while(i<a.size()){
            res[k]=a[i];
            k++;
            i++;
        }
    }
}
   
}

int main(){
    int arr[]={1,4,5,8};
    int n1 = sizeof(arr)/4;
    vector<int>a(arr,n1+arr);
    int brr[]={2,3,6,7,10,12};
    int n2 = sizeof(brr)/4;
    vector<int> b(brr,brr+n2);
   vector<int>res(n1+n2);
    merge(a,b,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}