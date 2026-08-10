#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int si,int end){
    int pivot = arr[si];
    int count =0;
    for(int i=si+1;i<=end;i++){
        if(arr[i]<=pivot)count++;
    }
    int pivotidx = count+si;
    swap(arr[si],arr[pivotidx]);
    int i= si;
    int j=end; 
    while(i<pivotidx and j>pivotidx){
        if(arr[i]<pivot)i++;
        if(arr[j]>pivot)j--;
        else if(arr[i]>pivot and arr[j]<=pivot){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
         }
    return pivotidx;
}
void quicksort(int arr[],int si,int end){
    if(si>=end) return;
    int pivot = partition(arr,si,end);
    quicksort(arr,si,pivot-1);
    quicksort(arr,pivot+1,end);
}
int main(){
    int arr[] ={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);
    cout<<"The quick sort is = ";            
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}//tc = (n2) is worst case 