#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<"The stack is empty or not  = "<<st.empty()<<endl;//return true and false
   cout<<"The current size of stack = "<<st.size()<<endl;
   st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);
   cout<<"The current size of stack = "<<st.size()<<endl;
    cout<<"The top element of stack = "<<st.top()<<endl;
   st.pop();
   cout<<"The current top element in the stack = "<<st.top()<<endl;
   cout<<"The current size of stack = "<<st.size()<<endl;
   

}