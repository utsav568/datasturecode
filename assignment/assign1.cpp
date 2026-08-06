#include <bits/stdc++.h>
using namespace std;

int main() {
    int x ,y;
    cin>>x>>y;
    if(x==0 and y!=0){
        cout<<"lie on y axis";
    }
    else if(x!=0 and y==0){
        cout<<"lie on x axis";
    }
    else if(x==0 and y==0){
        cout<<" lie on origin";
    }
    else cout<<" lie on the plane";
}
