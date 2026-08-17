#include <iostream>
using namespace std;
class Gun{
    private:
    int ammo;
    int damage;
    int scope;
    public:
    void setammo(int ammo){
        this->ammo = ammo;
    }
    void setdamage(int damage){
        this->damage = damage;
    }
    void setscope(int scope){
        this->scope = scope;
    }
    int getammo(){
        return ammo;
    }
    int getdamage(){
        return damage;
    }
    int getscope(){
        return scope;
    }
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
    void setgun( Gun gun){
        this->gun = gun;
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
    Gun getgun(){
        return gun;
    }

    
};
void print(Player c){
    Gun gun = c.getgun();
    cout<<c.gethealth()<<" "<<c.getage()<<endl<<"Gun Detail = "<<gun.getammo()<<" "<<gun.getdamage();
 cout<<endl;
}


int main(){
 Gun ak;
 ak.setammo(100);
 ak.setdamage(50);
 ak.setscope(30);

 Gun akm;
 akm.setammo(800);
 akm.setdamage(150);
 akm.setscope(330);

  Player utsav;
    utsav.sethealth(10);
    utsav.setage(21);
    utsav.setscore(100);
    utsav.setalive(true);
    utsav.setgun(ak);
      
    Player raghav;
    raghav.sethealth(130);
    raghav.setage(201);
    raghav.setscore(1200);
    raghav.setalive(true);
    raghav.setgun(akm);
    print(raghav);
    print(utsav);

     


}
