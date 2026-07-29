#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,15,18,21,24};
    int n =9;
    int x = 12;
    int low = 0;
    int high = n-1;
    bool flag =false;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            cout<<arr[mid-1];
            //upprbon arrm+1]
            flag = true;
            break;

        }
        else if(arr[mid]<x)low=mid+1;
        else high = mid-1;  
     }
    //the low bound is :p-0
    if(flag==false)cout<<arr[high];
    //for upperbound only sme code cot<<ar
}