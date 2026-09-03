#include <bits/stdc++.h>
using namespace std;
void swap(int *a ,int *b){
    int temp = *a;
    *a =  *b;
    *b = temp;
    
}
int main() {

int x ,y;
cin>>x>>y;
int * a = &x;
int * b = &y;
swap(a,b);
cout<<x<<" "<<y;

}