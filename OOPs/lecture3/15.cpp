 //Inheritance
 #include <iostream>
 using namespace std;
 class Vechicle{
    public:
    int tyresize;
    int enginesize;
    int light;
    string companyname;
    void show(){
        cout<<companyname<<endl;
    }
    Vechicle(){
        cout<<"construtor vechicles";
        cout<<endl;
    }
 };
class Car : public Vechicle{//car inherit vechile or base class ,child class.derived class
    public:
    
    int stringsize;
    

};
class Bike : public Vechicle{
    public:
    int handlesize;
    Bike(){
        cout<<"bike ka constructor"<<endl;
    }
    
};

int main(){
    Bike honda;
    honda.handlesize = 4;
    honda.tyresize = 5;
    honda.light =2;
    honda.companyname = "insoyse";
    honda.enginesize =34;
    honda.show();
   
}