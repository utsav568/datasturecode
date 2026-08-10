#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the first number = ";
    cin>>a;
    int b;
    cout<<"enter the second number = ";
    cin>>b;
    char  op;
    cout<<"enter the operation = ";
    cin>>op;
    switch(op){
       
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        case '/':
        cout<<a/b;
        break;
        case '%':
        cout<<a%b;
        break;
        default :
        cout<<"invalid operation";
    }
}