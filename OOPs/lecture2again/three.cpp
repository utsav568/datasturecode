
//dynamic allocation
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
Player getmaxscore(Player a , Player b){
    if(a.getscore() > b.getscore()) return a;
    else return b;
}
int main(){
    Player harsh;//static allocation
    harsh.setscore(100);
    harsh.sethealth(30);
    harsh.setage(38);
    harsh.setalive(true);
    Player raghav;
     raghav.setscore(89);
     raghav.sethealth(45);
     raghav.setage(34);
     raghav.setalive(false);
    Player utsav = getmaxscore(harsh , raghav);
      cout<<utsav.getscore()<<endl;

       Player *urvi = new Player;// pointer to object run time allocation or dynamic allocation
       (*urvi).setscore(80);
       urvi->sethealth(89);
       cout<<(*urvi).getscore()<<endl;
       cout<<(*urvi).gethealth()<<endl;
       cout<<urvi->gethealth();
      

}