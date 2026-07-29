#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ="leetcode";
	vector<int> arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch =s[i];
        int assi = (int)ch;
        arr[assi-97]++;



    }
    int max =0;
    for(int i=0;i<26;i++){
        if(arr[i]>max)max=arr[i];
    } 
    for(int i=0;i<26;i++){
        if(arr[i]==max){
            int assi = i+97;
            char ch = (char)assi;
            cout<<ch<<"= "<<max<<endl;
        }
    }

}