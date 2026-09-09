#include <bits/stdc++.h>
using namespace std;
void display(vector<int>&v){
   
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}

int main() {
vector<int> v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int x ;
    cin>>x;
    v.push_back(x);
}

for (int i = 0, j = v.size() - 1; i <= j; i++, j--) {
    // Swap 
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
display(v);


}

    
