#include <bits/stdc++.h>
using namespace std;

int main() {
	string str = "raghav is  a math teacher. he is a mentor of the is a beatiful men";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl<<endl<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


}