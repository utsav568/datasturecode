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
   class C :public A{
    public:
    int c_ka_value;
    C(){
        cout<<"c ka construcot"<<endl;
    }
    class D :public C ,public B{
        public:
        int d_ka_public;
        void show(){
            cout<<C::a_ka_public<<endl;
        }
    }

};


int main(){
    C d;
}//to over this probem ki A ka public c and b me aaarha humeshko kaise thik kre