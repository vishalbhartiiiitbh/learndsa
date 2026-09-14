#include<bits/stdc++.h>
using namespace std;
void learnvector(){
vector<int> v;
v.push_back(1);
v.push_back(2);
cout<< v[0]<<v[1];
v.emplace_back(3);
cout<< v[2];
vector <pair<int,int>> vec1;
vec1.push_back({1,2});
vec1.emplace_back(3,4);
cout << vec1[0].first<<vec1[0].second<<vec1[1].first<<vec1[1].second<<endl;

vector <int> v11(5,20);
vector<int> v2(v11);
vector<int>::iterator it= v11.begin();
it ++;
cout<<*(it)<<" ";
it = it +2;
cout<<*(it)<<" ";
for (auto it = v.begin(); it !=v.end(); it++)
{
    cout<<*(it)<<" ";
}
//deletion in vector
v.erase(v.begin()+1);
cout<< v[0]<<v[1];

// no element in vector
cout<<v.size();
v.swap(v11);
cout<<v.size();
cout <<v11.size();
//clear all the element of vector
v2.clear();
cout<<v2.size();
};

int main(){
learnvector();
}