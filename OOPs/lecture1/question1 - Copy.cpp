#include <iostream>
using namespace std;
class book{
    public:
    string name;
    int price;
    int nopage;
    int countbook(int p){
        if(price<p)
        return 1;
    else return 0;

    }
    bool isbookpresent(string book){
        if(name==book)return true;
        else return false;
    }

};
int main(){
    book s;
    s.price =90;
    s.name = "hindi";
    cout<<s.countbook(100)<<endl;
    cout<<s.isbookpresent("english");
}