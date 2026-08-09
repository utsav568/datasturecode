#include <bits/stdc++.h>
using namespace std;
//bruteforce method
int main(){
int arr[] ={5,1,8,2,3};
int n = sizeof(arr)/4;
vector<int>v(arr,arr+n);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
int count =0;
for(int i=0;i<v.size()-1;i++){
    for(int j=i+1;j<v.size();j++){
        if(v[i]>v[j])count++;
    }
}
cout<<count;
}//print in vector form tc =(n2) sc =(1)