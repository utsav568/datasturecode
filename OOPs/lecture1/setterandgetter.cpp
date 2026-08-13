#include <iostream>
using namespace std;
class player{
    private:
    int score;
    int mark;
    public:
    //setter is used to set value
    void setscore(int s){
        cout<<"score set kiya ja rha"<<endl;
        score=s;
    }
    void setmark(int m){
        cout<<"mark set kiya ja rha"<<endl;
        mark=m;
    }
    //getter is used to acess value;
    int getscore(){
        return score;
    }
    int getmark(){
        return mark;
    }

};
int main(){
player op;
op.setscore(10);
op.setmark(9);
cout<<op.getscore()<<endl;
cout<<op.getmark();
}