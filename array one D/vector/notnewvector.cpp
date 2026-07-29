#include <bits/stdc++.h>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
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
    for(int i=0;i<v.size()-1;i++){
        for(int j=v.size()-1;j>=0;j--){
            if(i<=j){
                int temp = v[i];
                v[i]=v[j];
                v[j]=temp;
            }
        }
    }
    display(v);

}

    
