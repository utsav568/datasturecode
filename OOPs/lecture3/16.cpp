 //Inheritance
 #include <iostream>
 using namespace std;
 
class A{
    private://can't be accesed outsixe and can't be inherit
    int a_ka_private;
    protected://can't be accessed outside .can be inherit
    int a_ka_protected;
    public:
    int a_ka_public;
};
class B:public A{
    public:
    int b_ka_public;
    void show(){
     a_ka_protected =9;
    }

};

int main(){
   B.b;
   b.b_ka_public =10;
 // learn purpose only
   
}