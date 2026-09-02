#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    int n = st.size();
    int arr[n];
    int i=0;
    while (st.size() > 0) {
      arr[i] = st.top();
      st.pop();
      i++;
     
    }
    for(int i=0;i<n;i++){
        st.push(arr[i]);
    }

   cout<<st.top();
   
}