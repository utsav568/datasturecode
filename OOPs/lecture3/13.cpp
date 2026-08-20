#include <iostream>
using namespace std;
void calculatearea(int a ,int b){
    cout<<a*b<<endl;
}
void calculatearea(int a){
    cout<<a*a<<endl;
}
void calculatearea(float a){
    cout<<3.14*a*a<<endl;
}
int main(){
calculatearea(20,89);
calculatearea(20);
calculatearea(2);

//this function overloading
}
