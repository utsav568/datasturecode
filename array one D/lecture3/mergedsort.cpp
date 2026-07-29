#include <bits/stdc++.h>
using namespace std;
vector<int>merge(vector<int> &v1,vector<int>&v2){
    int a = v1.size();
    int b = v2.size();
    vector<int> v(a+b);
    int i=0;
    int j=0;
    int k=0;
    while(i<=a-1 and i<=b-1){
        if(v1[i]<v2[j]){
            v[k]=v1[i];
            i++;
          

        }
        else {
            v[k]=v2[j];
            j++;
        }
        k++;
    }
    if(i==a){
        while(j<b){
            v[k]=v2[j];
            k++;
            j++;
        }
    }
    if(j==b){
        while(i<a){
            v[k]=v1[i];
            k++;
            i++;
        }
    }
    return v;
}
int main(){
   vector<int>v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);
  v1.push_back(4);
   vector<int>v2;
   
  v2.push_back(5);
  v2.push_back(6);
  v2.push_back(7);
  v2.push_back(8);
  v2.push_back(9);
  v2.push_back(12);
  
   vector<int>v = merge(v1,v2);
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }


}