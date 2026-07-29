#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int x;
    cin>>x;
    int index =-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x)index=i;
        break;
    }
    cout<<index;
}

    
