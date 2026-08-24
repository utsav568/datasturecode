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
    void insertatIdx(int idx ,int value){
       if(idx<0 || idx>size){
        cout<<"invalid idx"<<endl;
        return;
       }
      else if(idx==0){
        insertatbeg(value);
        
       }
      else if(idx==size){
        insertatend(value);
       
       }
       else{
        Node *t = new Node(value);
        Node *temp =head;
        for(int i=1;i<=idx-1;i++){
            temp = temp->next;
        }
        t->next=temp->next;
        temp->next =t;
        size++;
        
       }
    }
    int getatIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid idx ";
            return -1;
        }
        else if(idx==0) return head->value;
        else if(idx==size-1)return End->value;
        else{
            Node * temp = head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            return temp->value;
        }

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
          ll.insertatbeg(24);
          ll.insertatbeg(78);
          ll.insertatbeg(100);     
        ll.insertatIdx(4,59);
         ll.display();
         cout<<ll.getatIdx(4);
         


    }