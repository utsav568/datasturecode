#include <iostream>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int arr[5];
    Queue(){
        f=0;
        b=0;
    }
    void push(int val){
        if(b==5){
            cout<<"Overflow"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(b-f==0){
            cout<<"underflow"<<endl;
            return;
        }
        f++;
    }
    int front(){
     if(b-f==0){
        cout<<"Underflow"<<endl;
        return -1;
    }
     return arr[f];
    }
int back(){
    if(b-f==0){
        cout<<"Underflow"<<endl;
    
    }
        return arr[b-1];
}
int size(){
    return b-f;
}
bool empty(){
    if(f-b==0)return true;
    else return false;
}
void display(){
    for(int i=f;i<b;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};

int main(){
    Queue q;
 q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    q.push(60);
     q.display();
    q.pop();
    q.push(70);
  
//20,30,40,50
  
}