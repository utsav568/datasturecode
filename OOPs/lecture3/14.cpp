#include <iostream>
using namespace std;
class Bike{
    public:
    int tyre;
    int enginesize;
    Bike(int ts ,int es):tyre(ts) ,enginesize(es){};
    Bike(int ts):tyre(ts) ,enginesize(29){};
    Bike():tyre(23),enginesize(93){};

};
int main(){
Bike tvs(83,34);
Bike honda(32);
cout<<tvs.tyre<<" "<<tvs.enginesize<<endl;
cout<<honda.tyre<<" "<<honda.enginesize;
}