#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
vector<char> item;
int top;
Stack(int M){
    
    item.resize(M);
    top=-1;
}
void push(int x){
    if(top==item.size()-1){
        cout<<" stack overflow"<<endl;
    }
    else{ 
     top++;
     item[top]=x;
    }
}
int pop(){
if(top==-1){
    cout<<"stack under flow"<<endl;
}
else{
   int x= item[top];
    top--;
    return x;
}
}
int Stacktop(){
int x=item[top];
return x;
}

 bool Isempty(){
if(top==-1)
return true;

else{
    return false;
}
}
};
int main(){//

    Stack s(6);
    s.push(1);
 s.push(2); 
 s.push(3);
  s.push(4);
 int x= s.pop();
  cout<<x<<endl;
 x= s.Stacktop();
  cout<<x<<endl;
  x=s.pop();
   cout<<x<<endl;
   s.push(5);
    x= s.Stacktop();
  cout<<x<<endl;
   x=s.pop();
   cout<<x<<endl;
    x=s.pop();
   cout<<x<<endl;
    x=s.pop();
   cout<<x<<endl;
    x=s.pop();
   cout<<x<<endl;



}