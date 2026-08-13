#include <iostream>
using namespace std;
class player{
    private:
 string name;
    public:
    int score;
   
    int health;
};
int main(){
    player aman;
    aman.score=98;
   // aman.name ="utsav";
    aman.health = 87;
   // cout<<aman.name;
    cout<<aman.score<<" ";
    cout<<aman.health<<endl;
    player priyam;
    priyam.score = 76;
    priyam.health =32;
    cout<<priyam.score<<" "<<priyam.health;

}