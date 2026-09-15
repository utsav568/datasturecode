#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class Stack{
    vector<int> item;
    int Top;

    public:

    Stack(int s){
        item.resize(s);
        Top=-1;
    }

    void Push(int x){
        if(Top==item.size()-1){
            cout<<"Stack Overflows"<<endl;
            return;
        }
        else{
        Top++;
        item[Top]=x;
        }
    }

    int Pop(){
        if(Top==-1){
            cout<<"Stack Underflows"<<endl;
            return -1;
        }
        else{
        int x;
        x = item[Top];
        Top--;
        return x;
        }
    }


    int StackTop(){
        int x;
        x = item[Top];
        return x;
    }

    bool IsEmpty(){
        if(Top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

bool prcd(char a ,char b){
    if(a=='^'||a=='*'||a=='/'||a=='%'){
        if(b=='^'){
            return false;
        }
        else{
            return true;
        }
    }
    if(a=='+'||a=='-'){
        if(b=='+'||b=='-'){
            return true;
        }
        else{
            return false;
        }
    }

}

void  InfixTopostfix(string Infix){

    Stack s(20);
    int i = 0;
    string prefix;
    while(i<Infix.size()){
        char symbol = Infix[i];
        i++;

        if(symbol>='a' && symbol<='z'){
            prefix = prefix + symbol;
        }
        else{
            while(!s.IsEmpty() && !prcd(symbol,s.stacktop()))
            {
                char x = s.Pop();
                prefix = prefix + x;
            }
            s.Push(symbol);
        }
    }
    while(!s.IsEmpty()){
        char x = s.Pop();
        prefix = prefix + x;
    }
    cout<<Prefix;
}
int main(){
        string Infix;
        cin>>Infix;

        InfixToPostfix(Infix);
        
return 0;

}