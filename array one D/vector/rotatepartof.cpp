#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverse(int i,int j,vector<int>&b){
    while(i<=j){int temp = b[i];
    b[i]=b[j];
    b[j]=temp;
    i++;
    j--;
}
   
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    display(v);
    int k;
    cin>>k;
    int t= v.size();
    if(k>t)k=k%t;
    reverse(0,t-1-k,v);
    reverse(t-k,t-1,v);
    reverse(0,t-1,v);
    display(v);



}