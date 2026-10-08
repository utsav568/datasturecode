#include<iostream>
using namespace std;
struct Node{
    char data;
    struct Node* left;
    struct Node* right;
};
/**********************************************/
node *MakeNode(char x){
    node* p;
    p=new Node;
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
/*********************************************/
void Preorder(Node* t){
    if(t!=NULL){
        cout<<t->data<<endl;
        Preorder(t->left);
        Preorder(t->right);
    }
}
/*********************************************/
void Inorder(Node* t){
    if(t!=NULL){
        Inorder(t->left);
        cout<<t->data<<endl;
        Inorder(t->right);
    }
}
/*********************************************/
void Postorder(Node* t){
    if(t!=NULL){
        Postorder(t->left);
        Postorder(t->right);
        cout<<t->data<<endl;
    }
}
/*********************************************/


int main(){
    Node *Root =NULL;
    Root = MakeNode('A');
    Root->left = MakeNode('B');
    Root->left->left = MakeNode('F');
    Root->Right = MakeNode('C');
    Root->Right->left = MakeNode('D');
    Root->Right-Right = MakeNode('E');
    PreOrder(Root);
    InOrder(Root);
    Postoder(Root);

    
}
