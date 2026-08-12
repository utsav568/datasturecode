#include <iostream>
using namespace std;
int main(){
  
    int i=0;
    while(i<26){
        cout<<(char)(65+i)<<" = "<<(int)(i+'A')<<endl;
        i++;
    }
}