// #include <iostream>
// using namespace std;
// int number(int n){
//     if(n==1)return 1;
//     cout<<n<<endl;
//    return number(n-1);
// }

// int main(){
//  cout<<number(7);
// }
#include <iostream>
using namespace std;
void number(int n){
    if(n==0) return ;
    cout<<n<<endl;
  return number(n-1);
}

int main(){
 number(7);
}