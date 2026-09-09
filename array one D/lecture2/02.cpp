#include <bits/stdc++.h>
using namespace std;

int main() {
vector<int>v(5);
for(int i=0;i<v.size();i++){
    cin>>v[i];
}
v.push_back(9);
v.push_back(34);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}

}
