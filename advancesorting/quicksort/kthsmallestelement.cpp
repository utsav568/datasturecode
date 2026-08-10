#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int si,int end){
    int mid = (si + end) /2;
    int pivotelement = arr[mid];
    int count =0;
    for(int i=si;i<=end;i++){
        if(i==mid) continue;
        if(arr[i]<=pivotelement)count++;
    }

    int pivotidx = count+si;
    swap(arr[mid],arr[pivotidx]);
    int i= si;
    int j=end;
    while(i<pivotidx and j>pivotidx){
        if(arr[i]<=pivotelement)i++;
        if(arr[j]>pivotelement)j--;
        else if(arr[i]>pivotelement and arr[j]<=pivotelement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        

    }
    return pivotidx;
}
int kthsmallest(int arr[],int si,int end,int k){
    int pivot = partition(arr,si,end);
    if(pivot+1==k) return arr[pivot];
    else if(pivot+1<k) return (arr,pivot+1,end, k);
   else return kthsmallest(arr,si,pivot-1,k);
   

}
int main(){
    int arr[] ={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 5;
    cout<<kthsmallest(arr,0,n-1,k);
}