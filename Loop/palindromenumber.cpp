#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ld =0;
   
    int r =0;
    while(n>0){
        r*=10;
       ld%=10;
       r+=ld;
       n/=10;
}
if(r==n){
    cout<<"palindrome";
}
else cout<<"not palindrome";
}