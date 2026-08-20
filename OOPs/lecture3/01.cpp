//constructor
#include <iostream>
using namespace std;
class Student{
    private:
    int roll;
    string name;
    float gpa;
    public:
    Student(string name ,int roll,float gpa){//formation of constructor
        this->name = name;
        this->roll=roll;
        this->gpa = gpa;

    }
    string getname(){
        return name;
    }
    int getroll(){
        return roll;
    }
    float getgpa(){
        return gpa;
    }
};
int main(){
Student s("utsav" , 43,9.3);
cout<<s.getname()<<" "<<s.getroll()<<" "<<s.getgpa();
}