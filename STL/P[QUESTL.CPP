#include<bits/stdc++.h>
using namespace std;
void learnQUEUE(){
priority_queue<int> str;
str.push(8);
str.push(7);
str.push(3);
str.push(4);
str.emplace(6);
cout<<str.top()<<endl;
str.pop();
cout<<str.top()<<endl;
cout<<str.size()<<"size"<<endl;
priority_queue<int> int1;
int1.swap(str);
if (!str.empty())
    cout << str.top() << endl;
cout<<int1.top()<<endl;
};


int main(){
learnQUEUE();
}   