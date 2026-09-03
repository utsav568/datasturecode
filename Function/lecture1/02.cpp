#include <bits/stdc++.h>
using namespace std;
void fun(int &x ,int &y){
    cout<<"fuction wala adress"<<endl;
    cout<<&x<<endl;
    cout<<&y<<endl;
}
int main(){
    int x= 9;
    int y =2;
    cout<<&x<<endl;
    cout<<&y<<endl;
    fun(x,y);
}