#include <bits/stdc++.h>
using namespace std;
void sort1(vector<int>&v){
    int n= v.size();
    int low =0;
    int mid =0;
    int high = n-1;
    while(mid<=high){
        if(v[mid]==2){
            int temp =v[low];
            v[low]=v[high];
            v[high]=temp;
            high--;
        }
        else if(v[mid]==0){
            int temp = v[low];
            v[low]=v[mid];
            low++;
            mid++;
            
            
        }
        else mid++;//if v[mid==1]
    }
}

int main() {
vector<int> v;
int t;
cin>>t;
for(int i=0;i<t;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
sort1(v);
for(int i=0;i<t;i++){
    cout<<v[i]<<" ";
}

}
