#include <iostream>
using namespace std;
class car{
    public:
    string name;
    int price;
    int seat;
};
void print(car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seat<<endl;
}
void change(car c){//here new object is create c that accept tha value of c1 .this is pass by value;
    c.name = "bmw";
    
}

int main(){
car c1 ;
c1.name ="audi";
c1.price = 2300000;
c1.seat =4;
print(c1);
change(c1);//this is pass by value
print(c1);

}