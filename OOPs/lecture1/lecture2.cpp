#include <iostream>
using namespace std;
class player{
    public:
    int score;
    string name;
    int health;
};
int main(){
    player aman;
    aman.score=98;
    aman.name ="utsav";
    aman.health = 87;
    cout<<aman.score<<" ";
    cout<<aman.name<<" "<<aman.health<<endl;
    player priyam;
    priyam.score = 76;
    priyam.health =32;
    cout<<priyam.score<<" "<<priyam.health;

}