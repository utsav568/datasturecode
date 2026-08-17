#include <iostream>
using namespace std;
class Cricketer{
    public:
    int age;
    int notm;
    int score;
    string name;

};
void print(Cricketer c){
    cout<<c.name<<" "<<c.age<<" "<<c.notm<<" "<<c.score<<endl;
}
int main(){
    Cricketer virat;
    virat.name ="virat";
    virat.age =38;
    virat.score=100;
    virat.notm = 239;

    Cricketer dhoni;
    dhoni.name ="dhoni";
    dhoni.age = 43;
    dhoni.score =23;
    dhoni.notm = 124;
//static location second method on q2;

 Cricketer cricket[2] ={virat ,dhoni};
 for(int i=0;i<2;i++){
    print(cricket[i]);
 }
}//cout<<cricketer[0].name;