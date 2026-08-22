//function overridding
#include <iostream>
using namespace std;

class A {
private:
    int a_ka_private;
protected:
    int a_ka_protected;
public:
    int a_ka_public;
   void show(){//function overiding
    cout<<" A show"<<endl;
   }
    
};
class B :public A {
public:
    int b_ka_public;
    void show(){//function overiding
      cout<<"b show"<<endl;
 }
};
int main() {
  B b;
  A *a;
  a= &b;
}