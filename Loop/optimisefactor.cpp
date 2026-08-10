#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f = 0;
    for(int i = n/2;i>2;i--){
        if(n%i==0)f=i;
        break;
    }
    cout<<f;
}//best method to find factor