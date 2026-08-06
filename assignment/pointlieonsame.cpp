#include <bits/stdc++.h>
using namespace std;

int main() {
   int x1 ,x2,x3,y1,y2,y3;
   cin>>x1>>x2>>x3>>y1>>y2>>y3;
   int slop1 = (y2-y1)/(x2-x1);
   int slope2 = (y3-y2)/(x3-x2);
   if(slop1==slope2){
       cout<<"all the point lie on the same plane";
   }
   else cout<<"all the point are not lie on the same plane";
}
