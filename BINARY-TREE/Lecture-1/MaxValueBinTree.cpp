
#include <iostream>
#include <climits>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right=NULL;
    }
};
void displayTree(Node *Root){
if(Root==NULL)return;
cout<<Root->val<<" ";
displayTree(Root->left);
displayTree(Root->right);
}
int maxi(Node *Root){
    if(Root==NULL)return INT_MIN;//INT_MIN deal with all value and return 0 deal with positive value
    int Lmax = maxi(Root->left);
    int rmax = maxi(Root->right);
    return max(Root->val ,max(Lmax ,rmax));
}
int main(){
Node *a =new Node(1);
Node *b = new Node(2);
Node *c = new Node(3);
Node *d = new Node(4);
Node *e = new Node(5);
Node *f = new Node(6);
Node *g = new Node(7);
a->left = b;
a->right = c;
b->left = d;
b->right = e;
c->left=f;
c->right= g;
displayTree(a);
cout<<endl;
cout<<"Maximum Value of Tree : "<<maxi(a);

}