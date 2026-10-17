#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void Nthlevel(Node *root ,int L,int i){
    if(i==L){
        cout<<root->val<<" ";
        return;
    }
    Nthlevel(root->left ,L,i+1);
    Nthlevel(root->right,L,i+1);

}

int main(){
  Node *a = new Node(1);
     Node *b = new Node(2);
   Node *c  = new Node(3);
   Node *d  = new Node(4);
   Node * e = new Node(5);
   Node *f  = new Node(6);
   Node *g  = new Node(7);
   
 a->left=b;
 a->right=c;
 b->left=d;
 b->right=e;
 c->left=f;
 c->right=g;
 cout<<"Element of NthLevel are : ";
 Nthlevel(a,3,1);

}