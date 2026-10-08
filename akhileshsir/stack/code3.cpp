#include<iostream>
#include<vector>
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

void decimalToBinary(int N){
    Stack stk(100);

    while(N!=0){
      int r = N%2;
      stk.Push(r);
      N/=2;
    } 

    while(!stk.IsEmpty()) {
         cout<<stk.Pop();
    }
}

void decimalToOctal(int N){
    Stack stk(100);

    while(N!=0){
      int r = N%8;
      stk.Push(r);
      N/=8;
    } 

    while(!stk.IsEmpty()) {
         cout<<stk.Pop();
    }
}

void decimalToHexadecimal(int N){
    Stack stk(100);
    char dat[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    while(N!=0){
      int r = N%16;
      stk.Push(r);
      N/=16;
    } 

    while(!stk.IsEmpty()) {
        int x = stk.Pop();
         cout<<dat[x];
    }
}
int main(){
Stack stk(100);

int N;
cin>>N;

decimalToBinary(N);
cout<<endl;
decimalToOctal(N);
cout<<endl;
decimalToHexadecimal(N);
cout<<endl;

return 0;

}