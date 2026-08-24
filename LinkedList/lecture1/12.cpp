#include <iostream>
using namespace std;
class Node{
public:
int value;
Node *next;
Node(int value){
    this->value =value;
    this->next = NULL;
}
};

class Linkedlist{
    public:
    Node *head;
    Node * End;
    int size;
    Linkedlist(){
        head = End = NULL;
        size = 0;
    }
    void insertatend(int value){
        Node*temp = new Node(value);
        if(size==0){
            head = End = temp;
        }
        else{
            End->next = temp;
            End = temp;
        }
        size++;
    }
    void insertatbeg(int value){
        Node *temp = new Node(value);
        if(size==0){
            head=End =temp;

        }
        else{
            temp->next = head;
            head=temp;
        }
        size++;
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};
 int main(){
        Linkedlist ll;

        ll.insertatend(10);
        ll.display(); 
        ll.insertatend(20);
        ll.display();
        ll.insertatbeg(50);
          ll.display();
          cout<<ll.size;      



    }