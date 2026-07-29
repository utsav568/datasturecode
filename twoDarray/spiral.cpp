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
    //spiral
    int minr =0;
    int minc =0;
    int maxr = m-1;
    int maxc =n-1;
    int t = n*m;
    int count =0;
    while(minr<=maxr && minc<=maxc){
        for(int j = minc;j<=maxc && count<t;j++){
            cout<<a[minr][j]<<" ";
            count++;
        }
        minr++;
       
        for(int i= minr;i<=maxr && count<t;i++){
            cout<<a[i][maxc]<<" ";
             count++;
        }
        maxc--;
       
        for(int j = maxc;j>=minc && count<t;j--){
            cout<<a[maxr][j]<<" ";
             count++;
        }
        maxr--;
       
        for(int i= maxr;i>=minr && count<t;i--){
            cout<<a[i][minc]<<" ";
             count++; 
        }
        minc++;
       
    }
}