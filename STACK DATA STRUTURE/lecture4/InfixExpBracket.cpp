#include <iostream>
#include <string>
#include <stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-')return 1;
    else return 2;

}
int solve(int val1 ,int val2, char ch){
    if(ch=='+')return val1+val2;
    else if(ch=='-')return val1-val2;
    else if(ch=='*')return val1*val2;
    else return val1/val2;
}
int main(){
   string s ="(7+9)*4/8-3";
   stack<int>value;
   stack<int>op;
   for(int i=0;i<s.length();i++){
    //check s[i] is digit
    //int assci = (int)(s[i]);//dont need in cpp
    if(s[i]>=48 and s[i]<=57){
        value.push(s[i]-48);

    }
    else{
        if(op.size()==0 ) op.push(s[i]);
      else  if(s[i]=='(')op.push(s[i]);
       else if(op.top()=='(')op.push(s[i]);
       else if(s[i]==')'){
                while(op.top()!='('){
                     char ch = op.top();
                op.pop();
                int val2= value.top();
                value.pop();
                int val1 = value.top();
                value.pop();
                int ans = solve(val1,val2,ch);
                value.push(ans);
                }
                op.pop();
            }
        else if(prio(s[i])>prio(op.top()))op.push(s[i]);
            
        else {
            //work priority(s[i]<=priority(op.top))
            while(op.size()>0 and prio(s[i])<=prio(op.top())){
                char ch = op.top();
                op.pop();
                int val2= value.top();
                value.pop();
                int val1 = value.top();
                value.pop();
                int ans = solve(val1,val2,ch);
                value.push(ans);
            }
                  op.push(s[i]);
        }
    }
   }
   //the operator can have value so make it empty
   while(op.size()>0){
     char ch = op.top();
                op.pop();
                int val2= value.top();
                value.pop();
                int val1 = value.top();
                value.pop();
                int ans = solve(val1,val2,ch);
                value.push(ans);
   }
   cout<<value.top();
}