//passing  object to function
#include <iostream>
using namespace std;

    class car{
        public:
        string name;
        int price;
        int seat;
        string type;
    };
    void print(car c){
       cout<<c.name<<" "<<c.price<<" "<<c.seat<<" "<<c.type<<endl;
    }
int main(){
    
    car c1 ;
    c1.name = "scorpio";
    c1.price = 120000;
    c1.seat =4;
    c1.type ="nano";

    car c2 ;
    c2.name = "bmw";
    c2.price = 12990000;
    c2.seat =4;
    c2.type ="marce";

    car c3;
    c3.name = "bolero";
    c3.price = 99120000;
    c3.seat =4;
    c3.type ="mahindra";
    print(c1);
    print(c2);
    print(c3);

}