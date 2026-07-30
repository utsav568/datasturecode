#include <iostream>
using namespace std;
void sum();
float sum(int ,int,float);
int sum(int ,int);
int main(){
    int a ,b ,r1;
    float r2,c;
    cout<<"enter the number";
    cin>>a>>b>>c;
    sum();
    r1 = sum(a,b);
    r2 =sum(a,b,c);
    cout<<"then sum is :"<< r1;
    cout<<endl;
    cout<<r2;


}
void sum(){
    int x,y,s;
    cout<<"enter the number";
    cin>>x>>y;
    s=x+y;
    cout<<s;
    cout<<endl;
}
int sum(int a ,int b){

    return a+b;

}
float sum(int x,int y,float z){
    float s = x+y+z;
    return s;
}