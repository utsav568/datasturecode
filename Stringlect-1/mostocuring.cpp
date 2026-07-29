#include <bits/stdc++.h>
using namespace std;

int main() {
	string str = "phhysicswaaallllll";
    int max = 0;
   for(int i=0;i<str.length();i++){
    char ch = str[i];
    int count = 1;
    for(int j=i+1;j<str.length();j++){
        if(str[j]==str[i]) count++;
    }
    if(max<count)max = count;
    
    }
    cout<<max<<endl;
    for(int i=0;i<str.length();i++){
        char ch = str[i];
        int count =1;
        for(int j=i+1;j<str.length();j++){
            if(str[j]==str[i])count++;
        }
        if(count==max){
            cout<<ch<<" ="<<max<<endl;
        }
        
        }


   } 