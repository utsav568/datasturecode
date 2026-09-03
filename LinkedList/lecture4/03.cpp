//doubly linkedlist
#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node *next;
    Node *prev;
    Node(int value){
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DLL{
    public:
    Node *head;
    Node * End;
   int size;
    DLL(){
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
            temp->prev = End;//extra
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
            head->prev = temp;
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
        t->prev = temp;
        t->next->prev = t;
        size++;
        }
    }
    void delathead(){
        if(size==0)cout<<"linkedist is empty";
        head = head->next;
        if(head!=NULL){
        head->prev = NULL;
    }
    if(head==NULL)End = NULL;
        size--;
    }
    void delAtEnd(){
       
        if(size==0){
            cout<<"empty";
              return ;
        }
        else if(size==1){
            delathead();
            return;
        }
       Node *temp = End->prev;
       temp->next = NULL;
       End = temp;
          size--;
         }
    void DelAtIdx(int idx ){
      if(idx<0 || idx>=size){
        cout<<"Invalid";
        return;
    }
      else if(idx==0)return delathead();
      else if(idx==size-1)return delAtEnd();
      else{
        Node *temp = head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->prev = temp;
        size--;
      }
    }
    int getIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid idx";
            return -1;
        }
        else if(idx==0)return head->value;
        else if(idx==size-1)return End->value;
        else{
           if(idx<size/2){
             Node *temp = head;
            for(int i=1;i<=idx;i++){
                temp = temp->next;
            }
            return temp->value;
           }
           else{
            Node *temp = End;
            for(int i=1;i<size-idx;i++){
                temp = temp->prev;
            }
            return temp->value;
           }
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
DLL list ;
list.insertatend(10);
list.insertatend(20);
list.insertatend(30);  
list.insertatend(40);
list.insertatend(50); 
list.display();
list.insertatbeg(5);
list.display();
list.insertatIdx(4 ,4);
list.display();
list.delAtEnd();
list.display();
list.delathead();
list.display();
list.DelAtIdx(2);
list.display();
cout<<list.getIdx(3)<<endl;


}