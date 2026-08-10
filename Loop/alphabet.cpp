#include <iostream>
using namespace std;
int main(){
    char ch ;
    cin>>ch;
    int assci = (int)ch;
    if((assci>=97 and assci<=122) or (assci>=65 and assci<=90)){
        cout<<"alphabet";
    }
    else cout<<"not alphabet";
}