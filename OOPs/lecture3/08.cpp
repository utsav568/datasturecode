//parameterized constructor
#include <iostream>
using namespace std;
class Bike{
    public:
    int tyre;
    int enginesize;
Bike(int tyre ,int enginesize){
this->tyre = tyre;
this->enginesize = enginesize;
}
};
void print(Bike c){
    cout<<c.tyre<<" "<<c.enginesize;
    cout<<endl;
}

int main(){
Bike tvs(20,30);
cout<<endl;
cout<<tvs.tyre<<", "<<tvs.enginesize<<endl;
Bike honda(40,20);
print(tvs);
print(honda);

}