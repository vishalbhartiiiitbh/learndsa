#include<bits/stdc++.h>
using namespace std;

void learnSet(){
multiset<int> st;
st.insert(2);
st.emplace(2);
st.insert(2);
st.insert(2);
st.insert(2);
auto it = st.find(2);// find the element in set
if(it != st.end()){
    cout<<"found"<<endl;
}
int cnt = st.count(2);// count the element in set
cout<<cnt<<endl;
for(auto it = st.begin(); it != st.end(); it++){
    cout<<*it<<" "; 
}
cout<<st.size()<<"size"<<endl;
//st.erase(2);// erase the element in set
auto its = st.find(2);// find the element in set
st.erase(st.find(2));
for(auto it = st.begin(); it != st.end(); it++){
    cout<<*it<<" "; 
}
};
int main(){
    learnSet();
}