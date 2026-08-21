 //Inheritance
 #include <iostream>
 using namespace std;
 
class A{
    private:
    int a_ka_private;
    protected:
    int a_ka_protected;
    public:
    int a_ka_public;
    A(){
        cout<<"A ka constructor call hua"<<endl;
    }
};
class B:public A{
    public:
    int b_ka_public;
   B(){
    cout<<"b ka constructor"<<endl;
 }
 };
   class C :public B{
    public:
    int c_ka_value;
    C(){
        cout<<"c ka construcot"<<endl;
    }

};


int main(){
    C d;
}