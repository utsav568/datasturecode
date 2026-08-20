//parameterized constructor
#include <iostream>
using namespace std;
class Bike{
    public:
    int tyre;
    int enginesize;
    Bike(int tyre  ,int enginesize ){//parameterised hum value intialize krne ke liye use krne ke liye use krte h
   this->tyre = tyre;
   this->enginesize = enginesize;
   cout<<"constructor call hua :";

    }
};
int main(){
Bike tvs(30 ,89 );
cout<<endl;
cout<<tvs.tyre<<" "<<tvs.enginesize;
}