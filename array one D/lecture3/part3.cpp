#include <bits/stdc++.h>
using namespace std;
void sort1(vector<int>&v){
    int t = v.size();
    int i=0;
    int j= t-1;
    while(i<j){
        if(v[i]<0)i++;
        if(v[j]>0)j--;
        if(i>j)break;
        if(v[i]>0 and v[j]<0){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
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
    sort1(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}