#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n,p,q;
    cin>>m>>n>>p>>q;
    if(n==p){
        int a[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[m][n];
            }
        }
        int b[p][q];
         for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[p][q];
            }
        }

        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<p;k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
                        
            }
            cout<<endl;
        }
        else
        cout<<"the matrix not exits";
    }
}