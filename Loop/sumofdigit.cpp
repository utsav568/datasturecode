#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ld =0;
    int sum =0;
    while(n>0){
        ld = n%10;
         sum+=ld;
         n/=10;
    }
    cout<<"The sum is = "<<sum;
}//digit is 2345