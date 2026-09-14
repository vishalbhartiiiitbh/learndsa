#include<bits/stdc++.h>
using namespace std;
void learnlist(){
list <int> ls;
ls.push_back(2);
auto it = ls.begin();
cout << *it;
ls.push_front(3);
cout<< *ls.begin();
cout<<*ls.end();
};

int main(){
learnlist();
} 