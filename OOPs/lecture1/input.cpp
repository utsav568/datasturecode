#include <iostream>
using namespace std;
class student{
    public:
    int roll;
    float cgpa;
    string name;
};
int main(){
 student s1;
 s1.name = "utsav";
 //s1.roll;
 cin>>s1.roll;
 s1.cgpa = 9.3;
 cout<<s1.name<<" "<<s1.roll<<" "<<s1.cgpa<<endl;
 student s2;
 s2.roll = 45;
 s2.name = "raghav";
 s2.cgpa = 9.6 ;
 cout<<s2.name<<" "<<s2.roll<<" "<<s2.cgpa;
}