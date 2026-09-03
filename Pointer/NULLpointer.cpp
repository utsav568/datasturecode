#include <iostream>
using namespace std;
int main(){
    int x;
    int *p = &x;
    cout<<p<<endl;
    int *ptr = NULL;//reserved address
    int *ptr1 =0;
    int *ptr2 = '\0';
    cout<<ptr1<<" "<<ptr2<<endl;

    cout<<&ptr<<endl;
    cout<<ptr<<endl;
}