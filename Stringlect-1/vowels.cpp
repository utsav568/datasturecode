#include <bits/stdc++.h>
using namespace std;

int main() {
	// string str = "utsav";
    // int count = 0;
    // int i=0;
    // while(str[i]!='\0'){
    //     if(str[i]=='a'|| str[i]=='e'||str[i]=='o'||str[i]=='u')
    //     count++;
    // i++;
    // }
    // cout<<count;


    /*for using for loop*/
    string str ="utsav";
    int count =0;
    for(int i=0; str[i]!='\0';i++){
         if(str[i]=='a'|| str[i]=='e'||str[i]=='o'||str[i]=='u')count++;

    }
    cout<<"answer is =" <<count;

}