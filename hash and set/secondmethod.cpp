#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string,int> m;
     pair<string ,int> p;
    p.first ="raghav";
p.second= 49;
  m.insert(p);
    m["utsav"]=98;
    m["nilesh"]=89;
    m["uttkarsh"]=90;
     for(auto p1: m){
        cout<<p1.first<<" "<<p1.second<<endl<<endl;
     }
    cout<<m.size()<<endl;
   // m.erase("raghav");
    for(auto p1: m){
        cout<<p1.first<<" "<<p1.second<<endl;
    }
    cout<<m.size();
}