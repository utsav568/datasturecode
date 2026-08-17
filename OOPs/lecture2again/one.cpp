//passing class object to function
#include <iostream>
using namespace std;
class Player{
    private:
    int health;
    int age;
    int score;
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
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
 }
 bool getalive(){
    return alive;
 }
};
int addscore(Player a ,Player b){
    return a.getscore() + b.getscore();
}
int main(){
    Player harsh;
    harsh.setscore(100);
    harsh.sethealth(30);
    harsh.setage(38);
    harsh.setalive(true);
    Player raghav;
     raghav.setscore(89);
     raghav.sethealth(45);
     raghav.setage(34);
     raghav.setalive(false);
    int p = addscore(harsh , raghav);//passing object to function
     cout<<p;
     
}