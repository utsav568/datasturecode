#include <bits/stdc++.h>
using namespace std;
// void removechar(string ans ,string str){
//     if(str.size()==0){
//         cout<<ans;

//         return;
//     }
//     char ch = str[0];
//     if(ch=='a') removechar(ans , str.substr(1));
//     else removechar(ans+ch , str.substr(1));

// }


/**************second method************************/
void removechar(string ans ,string str ,int idx){
    if(str.size()==0){
        cout<<ans;

        return;
    }
    char ch = str[idx];
    if(ch=='a') removechar(ans ,str ,idx+1);
    else removechar(ans+ch , str , idx+1);

}

int main(){
string str = "raghav garg";
//removechar("" , str);
removechar("" , str , 0);
}