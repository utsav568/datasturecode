
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
     class Helmet{
        private:
        int hp;
        int level;
        public:
        void sethp(int hp){
            this->hp =hp;
        }
        void setlevel(int level){
            this->level =level;
        }
        int gethp(){
            return hp;
        }
        int getlevel(){
            return level;
        }

    };


    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;

   

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
    void sethelmet(int level){
        Helmet *helmet = new Helmet;
       helmet->setlevel(level);
       int health =0;
       if(level==1){
        health = 25;
       }
       else if(level==2){
        health = 50;
       }
       else if(level==3){
        health = 75;
       }
       else health =100;
       helmet->sethp(health);
       this->helmet = *helmet;
    }
    Helmet gethelmet(){
        return helmet;
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
  void helmett(){
     cout<<helmet.gethp()<<endl;
         cout<<helmet.getlevel()<<endl;
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
    harsh.sethelmet(2);

    // player 2
    Player raghav;
     raghav.setscore(89);
     raghav.sethealth(45);
     raghav.setage(34);
     raghav.setalive(false);
     raghav.setgun(rifle);
     raghav.sethelmet(4);
      
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
       cout<<"Gun detail for harsh  are below"<<endl;
       Gun gunak = harsh.getgun();
       cout<<gunak.ammo<<endl;
       cout<<gunak.damage<<endl;
       cout<<gunak.scope<<endl;
       cout<<"Gun detail for raghav are below"<<endl;
       Gun Gunragh = raghav.getgun();
        cout<<Gunragh.ammo<<endl;
       cout<<Gunragh.damage<<endl;
       cout<<Gunragh.scope<<endl;
       //helmet detail
       cout<<"helmet detail for harsh"<<endl;
       harsh.helmett();
       cout<<"helmet detail for raghav"<<endl;
       raghav.helmett();
      
        

}