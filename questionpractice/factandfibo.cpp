#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int f =1;
    for(int i=2;i<=n;i++){
        f*=i;
        
    }
    return f;
}


void fibo(int n) {
    int a = 0, b = 1;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}


int main() {
  int x;
  cin>>x;
  cout<<"factorial is :"<<fact(x)<<endl;
  int a;
  cin>>a;
  int b;
  cin>>b;
  fibo(6);
  
}