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
 class Stack{
    public:
    Node *head ;
    int size;
    Stack(){
        head = NULL;
        size =0;
    }
    void push(int val){
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty";
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"stack is empty";
            return -1;
        }
        return head->value;


    }
    void display(){
        Node *temp = head;
        while(temp){
            cout<<temp->value<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
 };
 int main(){
    Stack st;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.push(50);
st.push(60);
cout<<st.top()<<endl;
st.display();

 }