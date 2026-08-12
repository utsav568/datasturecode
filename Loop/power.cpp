#include <iostream>
using namespace std;
int main(){
    int a ,b;
    int pow = 1;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        pow*=a;
    }
    cout<<pow;
    
}