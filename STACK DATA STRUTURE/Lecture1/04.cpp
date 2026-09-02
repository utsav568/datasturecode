#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);
  //we will use extra stack
  stack<int> temp;
  while(st.size()>0){
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    temp.push(x);
  }

  cout<<"\nThe size of st = "<<st.size()<<endl;
  cout<<"The size of temp = "<<temp.size()<<endl;
  cout<<endl;
  //putting element to temp -> st
  while(temp.size()>0){
    cout<<temp.top()<<" ";
    int x = temp.top();
    temp.pop();
    st.push(x);
  }
  cout<<endl;
   cout<<"The size of st = "<<st.size()<<endl;
  cout<<"The size of temp = "<<temp.size()<<endl;
}