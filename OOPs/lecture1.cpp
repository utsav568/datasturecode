#include <iostream>
using namespace std;
class student{//student is new datatypes
    public:
    string name;
    int roll;
    float gpa;
    int age;
   //int mark[5];

};
int main(){
student s;
s.name = "utsav";
//s.roll = 34;
cin>>s.roll;
s.gpa =8.9;
s.age =9;
 cout<<s.name<<" "<<s.roll<<" "<<s.gpa<<" "<<s.age;

}//basic