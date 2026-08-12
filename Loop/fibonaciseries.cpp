#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a =1;
    int b=1;
    int sum =0;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;
    }
    //print all fibo series 
}