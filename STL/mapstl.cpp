#include<bits/stdc++.h>
using namespace std;    
//multimap is simiare to map it only styore dublicate key value pair
//unordered_map is simiare to map it only store key value pair in unorderd way
void learnMAp(){
map<int,string> mp;
mp[1] = "vishal";
mp.insert({3,"singh"});
mp[2] = "kumar";
// mp.insert({3,"singh"});
for(auto it = mp.begin(); it != mp.end(); it++){
    cout<<it->first<<" "<<it->second<<endl; 
}
for(auto it: mp){
    cout<<it.first<<" "<<it.second<<endl; 
}

auto its = mp.find(2);// find the element in map
cout<<its->first<<" "<<its->second<<endl;
map<pair<int,int>,string> mp1;
mp1[{1,2}] = "vishal";
};
int main(){
    learnMAp();
}