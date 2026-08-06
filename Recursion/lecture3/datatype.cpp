#include <bits/stdc++.h>
using namespace std;
int remove(int arr[],vector<int>&v,int n,int idx){
    if(n==idx){
        return 0;
    }
    int a =arr[idx];
    if(a==1){
        
    return remove(arr,v,n,idx+1);
        
    }
     
    else{
        v.push_back(a);
      return 1+remove(arr,v,n,idx+1);
    }
}

int main() {
	int arr[]={1,2,3,4,1,1};
	int n = sizeof(arr)/4;
	vector<int>v;
	int number = remove(arr,v,n,0);
	for(int i=0;i<v.size();i++){
	    cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"the number is = "<<number;
	
	

}