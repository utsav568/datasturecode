static function and variable
#include <iostream>
using namespace std;
class Bike{
    public:
  static int nol;//this is not depend on object.this belong to the class;
    int tyre;
    int enginesize;
Bike(int tyre ,int enginesize){
this->tyre = tyre;
this->enginesize = enginesize;

}
static void increase(){
   nol++;
}

};
int Bike::nol =10;

int main(){
Bike tvs(20,30);
Bike honda(40,20);
 cout<<tvs.nol<<endl;
 tvs.increase();
 cout<<honda.nol<<endl;
 cout<<tvs.nol<<endl;
 Bike::increase();
  cout<<honda.nol<<endl;
 cout<<tvs.nol<<endl;

}