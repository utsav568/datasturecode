#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=20;i++){
        if(i==3 or i==8)continue;//if(i!=3 or i!=8)then cout <<i<<" ";
        else cout<<i<<" ";
    }
}