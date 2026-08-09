#include <bits/stdc++.h>
using namespace std;

int inversion(vector<int>&a,vector<int>&b){
    int count =0;
    int i=0;
    int j=0;
    while(i<a.size() and j<b.size()){
      if(a[i]>b[j]){
    count+=(a.size()-i);
            j++;
        }
        else {
            i++;
        }
 }
    return count;
    }
void merge(vector<int>&a,vector<int>&b,vector<int>&res){
     int i=0;
    int j=0;
    int k=0;
    while(i<a.size() and j<b.size()){
        if(a[i]<=b[j]){
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
 int mergesort(vector<int>&v){
    int count =0;
    int n = v.size();
    if(n==1)return 0;
    int n1 =n/2;
    int n2 = n-n/2;
    vector<int>a(n1);//for declaring two vector<int>a(n1),b(n2);
    vector<int>b(n2);
    for(int i=0;i<n1;i++){
        a[i] = v[i];
      
    }
    for(int i=0;i<n2;i++){
       b[i]=v[i+n1];
       
    }
    //magic for recursion
   count+= mergesort(a);
   count+=mergesort(b);
   count+=inversion(a,b);

    merge(a,b,v);
    a.clear();
    b.clear();
    return count;
}
int main(){
    int arr[] = {5,1,8,2,3};
    int n = sizeof(arr)/4;
    vector<int>v(arr,arr+n);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   
    cout<<mergesort(v);
}