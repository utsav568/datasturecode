#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(3);
     v.push_back(4);
      v.push_back(1);
    cout<<v.at(2)<<endl;
    v.at(3)=78;
    cout<<v.at(3)<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";//v[i]
    }
    cout<<endl;
    sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";//v[i]
    }
    

}