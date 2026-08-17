
//nested class
#include <iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int scope;
    int damage;

};
class Player{
    private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
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
    void setgun(Gun gun){
        this->gun = gun;
    }
    Gun getgun(){
        return gun;
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
    //gun detail
     Gun ak;
       ak.ammo =90;
       ak.damage =78;
       ak.scope =33;

       Gun rifle;
       rifle.ammo =23;
       rifle.damage =42;
       rifle.scope =38;

       //player 1
    Player harsh;
    harsh.setscore(100);
    harsh.sethealth(30);
    harsh.setage(38);
    harsh.setalive(true);
    harsh.setgun(ak);

    // player 2
    Player raghav;
     raghav.setscore(89);
     raghav.sethealth(45);
     raghav.setage(34);
     raghav.setalive(false);
     raghav.setgun(rifle);
      
     //return type player
    Player utsav = getmaxscore(harsh , raghav);
      cout<<utsav.getscore()<<endl;

           //using pointer for dynamic location
       Player *urvi = new Player;
       (*urvi).setscore(80);
       urvi->sethealth(89);
       cout<<(*urvi).getscore()<<endl;
       cout<<(*urvi).gethealth()<<endl;
       cout<<urvi->gethealth()<<endl;
      
      //print harsh raghav gun detail
       cout<<"Harsh ammo = "<<harsh.getgun().ammo<<endl;
       cout<<"raghav ammo = "<<raghav.getgun().ammo<<endl;
       

}