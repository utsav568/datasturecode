#include <bits/stdc++.h>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int j=0;j<n;j++){
        if(j%2==0){
            for(int i=0;i<m;i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<a[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}