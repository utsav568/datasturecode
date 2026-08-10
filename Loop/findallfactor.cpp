#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
        
    }//this is increasing order formate
    //decreasing order formate (int i =n/2 ;i>=1;i--)
}