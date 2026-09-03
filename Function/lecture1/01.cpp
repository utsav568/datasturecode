#include <bits/stdc++.h>
using namespace std;


int fact(int n){
    int fact =1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int comb(int n ,int r){
    int ncr = fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int main(){
    int n ;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int k =0; k<n-i;k++){
            
        cout<<" ";
            
        }
        for(int j=0;j<=i;j++){
            cout<<comb(i,j)<<" ";
        }
            
        
        cout<<endl;
    }
   
  
}
  