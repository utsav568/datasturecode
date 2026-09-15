#include <iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
Node *GetNode(){
    Node *p;
    p= new Node;
    return p;
}
Node *Enqueue(Node *PQ){
    Node *curr ,*pre;
    curr =PQ;
    prev = NULL;
    Node *r;
    r= GetNode();
    r->data =x;
    while(curr!=NULL && x>=curr->data){
        prev =curr;
        curr = curr->next;

    }
    if(prev==NULL){
        prev->next =r;
        r->next = curr;
    }
    else {
        r->next =PQ;
        PQ=r;
    }
}
 Node *DeQueue(Node *PQ){
    if(PQ==NULL){
        cout<<"underflow";
        exit(1);
    }
    Node *p;
    p=PQ;
    int x =p->data;
    PQ=PQ->next;
    delete(p);
    cout<<x<<endl;
    return PQ;
}
int main(){
    Node *PQ;
    PQ=NULL:
    EnQueue(PQ,4);
    EnQueue(PQ,2);
    EnQueue(PQ,9);
    EnQueue(PQ,7);
    EnQueue(PQ,5);
    EnQueue(PQ,4);

    Node *p = PQ;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    PQ = DeQueue(PQ);
     PQ = DeQueue(PQ);
      PQ = DeQueue(PQ);
       PQ = DeQueue(PQ);
        PQ = DeQueue(PQ);
         PQ = DeQueue(PQ);
          PQ = DeQueue(PQ);
     p=PQ;
     while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}wrong