#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;//you need not mention size
    v.push_back(9);
    v.push_back(8);
    v.push_back(7);
    v.push_back(5);
    v.push_back(4);
    v[0]=8;
    int n = v.size();
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<v.capacity();

}