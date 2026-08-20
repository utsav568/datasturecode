#include <iostream>
using namespace std;
class Bike{
    public:
    int tyre;
    Bike(int a){
        this->tyre =a;
       
    }
};
int main(){
Bike tvs(10);
Bike honda(20);
cout<<tvs.tyre<<endl;
cout<<honda.tyre;
}