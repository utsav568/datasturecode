#include <iostream>
using namespace std;
void print(){
   static int b = 10;//static
    cout<<b<<endl;
    b++;
}
int main(){
print();
print();
print();
}//esh case me memory 1 hi bar allocate horhi h