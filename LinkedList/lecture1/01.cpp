#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
int main(){
 Node a(10);
 Node b(20);
 Node c(30);
  Node d(40);
  a.next = &b;
  b.next = &c;
  c.next = &d;
  d.next = NULL;
  cout<<a.value<<endl;
  cout<<(a.next)->value<<endl;
  cout<<(*a.next).value<<endl;
  cout<<(*(a.next)).next<<endl;
  cout<<b.next<<endl;
  cout<<(*(a.next)).value<<endl;
  a.next->value = 70;
  cout<<(a.next)->value<<endl;
  cout<<b.value<<endl;
  
  
}