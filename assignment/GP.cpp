#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s = 3;
    while(n--){
        cout<<s<<" ";
        s*=4;
    }
}