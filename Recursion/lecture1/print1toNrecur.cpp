#include <iostream>
using namespace std;
void print(int n){
    if(n==0)return;//base case
    print(n-1);//call
    cout<<n<<endl;//kam
}
int main(){
    int x;
    cin>>x;
    print(x);//screen sort at phone to laptop
}