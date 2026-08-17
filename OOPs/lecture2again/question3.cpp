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
int main() {
   
    Cricketer* virat = new Cricketer;
    

    virat->name = "virat";
    virat->age = 38;
    virat->score = 100;
    virat->notm = 239;

    Cricketer* dhoni = new Cricketer;
    dhoni->name = "dhoni";
    dhoni->age = 43;
    dhoni->score = 23;
    dhoni->notm = 124;

 
    print(*virat);
    print(*dhoni);

    // 3. Memory free karna mat bhoolna!
    delete virat;
    delete dhoni;
    
    return 0;

}