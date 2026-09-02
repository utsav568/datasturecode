#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    stack<int> st;
    vector<int> v;
     int ele  ;
     cin>>ele;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    while (st.size() > 0) {
        v.push_back(st.top());
        st.pop();
    }
     st.push(ele);//push at buttom
      cout<<st.top()<<endl;
     for(int i=0;i<v.size();i++){
        st.push(v[i]);
     }
     cout<<st.top();
    
}