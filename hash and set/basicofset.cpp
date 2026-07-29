#include <bits/stdc++.h>
using namespace std;
int main() {
unordered_set<int> s;
//element store in unorder way or random order.
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
//s.insert(1);
s.erase(2);
int target = 4;
//s.find work to on if -> s.find() it search in the set if not found return the last element.
if(s.find(target)!=s.end()){//it mean target exit .
    cout<<"exits"<<endl;
}

//if(s.find(target)==s.end()) it means target not exit.
else
cout<<"not exits";
cout<<s.size()<<endl;
//how to print the value to use for each loop;
for(int ele : s){//or we use auto in place of int.
    cout<<ele<<" ";
}
	

}
//set store unique element .
//one element print aleast one time not two time just like s.insert(1)  it occure in two time but they print aleast one time;
