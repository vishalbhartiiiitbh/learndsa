#include<bits/stdc++.h>
using namespace std;
void learnQUEUE(){
queue<int> str;
str.push(1);
str.push(2);
str.push(3);
str.push(4);
str.emplace(6);
cout<<str.front()<<endl;
str.pop();
cout<<str.front()<<endl;
cout<<str.size()<<"size"<<endl;
queue<int> int1;
int1.swap(str);
if (!str.empty())
    cout << str.front() << endl;
cout<<int1.front()<<endl;
};


int main(){
learnQUEUE();
}