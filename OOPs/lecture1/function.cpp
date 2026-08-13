#include <iostream>
using namespace std;
class player{
    public:
    int score;//data member
    int health;
    void showhealth(){//member fuction
        cout<<"heath is well : "<<health<<endl;
    }
};
class calculator{
public:
int a;
int b;
void add(){
    cout<<a+b<<endl;
}
void subs(){
    cout<<a-b;
}
};
int main(){
    player amit;
    amit.score =90;
    amit.health =89;
    amit.showhealth();
     calculator op;
     op.a =9;
     op.b =3;
     op.add();
     op.subs();
}