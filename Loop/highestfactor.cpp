#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f = 0;
    for(int i=2;i<n;i++){
        if(n%i==0)f=i;
    }
    cout<<f;
}//find the  factor of any number