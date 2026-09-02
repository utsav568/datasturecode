#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> temp;
    stack<int> rt;
    st.push(10);
   st.push(20);
   st.push(30);
   st.push(40);
   st.push(50);
   st.push(60);
  //we will use extra stack
  
  while(st.size()>0){
    cout<<st.top()<<" ";
     temp.push(st.top());
    st.pop();
  
  }

  cout<<"\nThe size of st = "<<st.size()<<endl;
  cout<<"The size of temp = "<<temp.size()<<endl;
  cout<<"The size of rt = "<<rt.size()<<endl;
  cout<<endl;
  
  while(temp.size()>0){
   rt.push(temp.top());
    temp.pop();
  }
  cout<<endl;
   cout<<"The size of st = "<<st.size()<<endl;
  cout<<"The size of temp = "<<temp.size()<<endl;
  cout<<"The size of rt = "<<rt.size()<<endl;
  while(rt.size()>0){
      st.push(rt.top());
      rt.pop();
  }
   cout<<"\nThe size of st = "<<st.size()<<endl;
  cout<<"The size of temp = "<<temp.size()<<endl;
  cout<<"The size of rt = "<<rt.size()<<endl;
   cout<<st.top()<<endl;
}