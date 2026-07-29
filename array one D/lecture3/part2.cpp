#include <bits/stdc++.h>
using namespace std;
void sort1(vector<int> &v){
    int t = v.size();
    int i=0;
    int j = t-1;
    while(i<=j){
        if(v[i]==0)i++;
        if(v[j]==1)j--;
        if(i>j)break;
        if(v[i]==1 and v[j]==0){
            v[i]=0;
            v[j]=1;
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