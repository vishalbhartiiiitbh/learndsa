#include<bits/stdc++.h>
using namespace std;
void learndeque(){
deque <int> ls;
ls.push_back(2);
auto it = ls.begin();
cout << *it;
ls.push_front(3);
cout<< *ls.begin();
cout << ls.back();

};

int main(){
learndeque();
} 