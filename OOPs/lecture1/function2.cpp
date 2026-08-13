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
private:
int a=9;
int b=8;
public:
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
    op.add();
     op.subs();
}//give random value