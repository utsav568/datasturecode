//return class in function
#include <iostream>
using namespace std;
class Player{
    private:
    int health;
    int age;
    int score;
    string name;
    bool alive;
    public:
    void sethealth(int health){
        this->health = health;
    }
    void setage(int age){
        this->age = age;
      }
    void setscore(int score){
        this->score = score;
        }
    void setalive(bool alive){
        this->alive = alive;
    }
    void setname(string name){
        this->name = name;
    }
 int gethealth(){
        return health;
    }
    int getage(){
        return age;
 }
    int getscore(){
        return score;
    }
    bool aalive(){
        return alive;
    }
      string ch (){
        return name;
    }
};
int score(Player a ,Player b){
    return a.getscore()+b.getscore();
}
Player getmaxscore(Player a , Player b){
    if(a.getscore()> b.getscore()) return a;
    else return b;
}
int main(){
    Player s;
    s.sethealth(10);
    s.setage(21);
    s.setscore(100);
    s.setalive(true);
    s.setname("utsav");
    
    s.setalive(true);
    Player u;
    u.setscore(120);
    u.setage(29);

    cout<<s.gethealth()<<endl;
    cout<<s.getage()<<endl;
    cout<<s.getscore()<<endl;
    cout<<s.aalive()<<endl;
    cout<<s.ch()<<endl;

    cout<<score(s,u)<<endl;  // we passes object as a parameter;

   Player sanket =  getmaxscore(s,u);
   cout<<sanket.getscore()<<endl;
   cout<<sanket.getage();

}