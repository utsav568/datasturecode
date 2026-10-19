#include <bits/stdc++.h>
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
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node *root = new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp = q.front();
        q.pop();
        Node* Left ;
        Node * Right;
        if(arr[i]!=INT_MIN) Left = new Node(arr[i]);
        else Left=NULL;
        if(j!=n && arr[j]!=INT_MIN) Right = new Node(arr[j]);
        else Right=NULL;
           temp->left=Left;
           temp->right=Right;
           if(Left!=NULL)q.push(Left);
           if(Right!=NULL)q.push(Right);
           i+=2;
           j+=2;
        
    }
    return root;
}

void levelOrder(Node *root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node *temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
  int n = sizeof(arr)/sizeof(arr[0]);
 Node* root = construct(arr,n);
 cout<<"Element of LevelTraversal are : "<<endl;
levelOrder(root);
}