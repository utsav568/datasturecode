#include <iostream>
using namespace std;
class Student {
    private:
    int age;
    int marks;

public:
    Student(int a, int m) : age(a), marks(m) {
    }

    void show() {
        cout << age << " " << marks;
    }
};
int main(){
    Student s(20,30);
    s.show(); 

}