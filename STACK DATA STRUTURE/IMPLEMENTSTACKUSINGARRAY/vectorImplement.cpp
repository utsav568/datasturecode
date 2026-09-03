#include <iostream>
#include <vector>
using namespace std;
class stack{//userdefine data struture
    public:
    vector<int>v;//no over flow condition
  
    stack(){
       
    }
    void push(int val){
        
     v.push_back(val);
        
    }
    void pop(){
        if(v.size()==0){
            cout<<"overflow"<<endl;
            return;
        }
       v.pop_back();
    }
    int top(){
        if(v.size()==-1){
            cout<<"overflow"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
     return  v.size();
    }
};
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(50);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size();

}