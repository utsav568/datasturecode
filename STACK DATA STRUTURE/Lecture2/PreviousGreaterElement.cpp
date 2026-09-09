#include <iostream>
#include <stack>
using namespace std;

int main(){
    int arr[] = {3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/4;

    stack<int> st;
    int prev[n];

    prev[0] = -1;
    st.push(arr[0]);

    for(int i=1;i<n;i++){
        while(st.size()>0 and st.top()<=arr[i]){
            st.pop();
        }

        if(st.size()==0) prev[i] = -1;
        else prev[i] = st.top();

        st.push(arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<prev[i]<<" ";
    }

    cout<<endl;
}