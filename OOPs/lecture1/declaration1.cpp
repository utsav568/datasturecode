#include <iostream>
using namespace std;
class student{
    public:
    int roll;
    float cgpa;
    string name;
};
class car{
    public:
    string name;
    int price;
    int seats;
    string types;
};
int main(){
 student s1;
 s1.name="utsav";
 s1.roll =38;
 s1.cgpa =8.9;
 cout<<s1.name<<" "<<s1.roll<<" "<<s1.cgpa<<endl;
 student s2;
 s2.roll =89;
 s2.name ="raghav";
 s2.cgpa =9.3;
 cout<<s2.name<<" "<<s2.roll<<" "<<s2.cgpa<<endl;
 car c;
 cin>>c.name;
 cin>>c.price;
 cin>>c.seats;
 cin>>c.types;
 cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.types;
}