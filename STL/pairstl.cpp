#include<bits/stdc++.h>
using namespace std;
void learnpair(){
pair <int,int> p={1,3};
cout << p.first << " " << p.second<< endl;
pair <int,pair <int,int>> p1 = {1,{2,3}};
cout<< p1.first<<p1.second.first<<p1.second.second<<endl;
pair <int,int> par[]= {{1,2},{3,4},{5,6}};
cout<<par[1].second;
};

int main (){
learnpair();
}