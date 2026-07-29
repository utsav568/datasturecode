#include <bits/stdc++.h>
using namespace std;

int main() {
	string str = "raghav is good teacher and is  is  was doing  a a  a well";
   string temp;
    vector<string> v;
    stringstream ss(str);
    while(ss>>temp){
        v.push_back(temp);

    }
    cout<<endl;
    sort(v.begin(),v.end());
    int maxc =1;
    int count = 1;
    for(int i=0;i<v.size();i++){
        if(v[i]==v[i+1])count++;
        else count =1;
        maxc =max(maxc,count); 
    }
   count = 1;
   for(int i=1;i<v.size();i++){
    
    if(v[i]==v[i-1])count++;
    else count =1;
    if(count==maxc){
        cout<<v[i]<<" = "<<maxc<<endl;
    }

   }
}