#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string,int> m;
    pair<string ,int>p1;
    p1.first ="utsav";
    p1.second = 76;

    pair<string ,int>p2;
    p2.first ="Raghav";
    p2.second = 73;
    pair<string ,int>p3;
    p3.first ="lokesh";
    p3.second = 79;
    pair<string ,int>p4;
    p4.first ="nilesh";
    p4.second = 77;
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    m.insert(p4);
//    for(pair<string,int> p:m){
//     cout<<p.first<<" "<<p.second<<endl;
//    }
 for(auto p:m){
    cout<<p.first<<" "<<p.second<<endl;
   }

    
       

}