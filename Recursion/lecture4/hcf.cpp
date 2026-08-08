#include <bits/stdc++.h>
using namespace std;
int hcf(int a ,int b){
    if(a==0)return b;
    return hcf(b%a ,a) ;

}

int main(){
    int a = 24;
    int b =60;
    cout<<hcf(a,b);
}
//this is long division method and tc is log(a+b);