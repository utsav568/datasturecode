#include <bits/stdc++.h>
using namespace std;

int main() {
	string arr[] = {"3456","5567","468","5677","65","00098"};
    int max = stoi(arr[0]);
    string s =arr[0];
    for(int i=0;i<=5;i++){
        int x = stoi(arr[i]);
        if(x>max){
            //max=x;
            s = arr[i];
        }
    }
    cout<<s;

}