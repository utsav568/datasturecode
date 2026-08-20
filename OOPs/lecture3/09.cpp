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
~Bike(){
    cout<<"destructor call hua";
    cout<<endl;
}
};


int main(){
Bike tvs(20,30);


Bike honda(40,20);
cout<<tvs.tyre<<" "<<tvs.enginesize<<endl;
cout<<honda.tyre<<" "<<honda.enginesize;
cout<<endl;
}