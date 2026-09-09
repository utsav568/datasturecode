#include <iostream>
#include <string>
#include <stack>
using namespace std;
string solve(string val1 ,string val2, int ch){
   string s ="";
    s.push_back(ch);
   s+=val1;
  
   s+=val2;
   return s;
}
int main(){
   string s ="79+4*8/3-";
   stack<string>value;
  
   for(int i=0;i<s.length();i++){
    
    if(s[i]>=48 and s[i]<=57){
        value.push(to_string(s[i]-48));

    }
    else{
       //kaam
     string val2 = value.top();
     value.pop();
     string val1 = value.top();
     value.pop();
     string ans = solve(val1,val2,s[i]);
     value.push(ans);
    }
   }

  
   cout<<"Prefix : "<<value.top();
}