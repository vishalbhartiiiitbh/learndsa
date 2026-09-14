#include<bits/stdc++.h>
using namespace std;

void learnSet(){
set<int> st;
st.insert(1);
st.emplace(2);
st.insert(2);
st.insert(4);
st.insert(3);
auto it = st.find(3);// find the element in set
if(it != st.end()){
    cout<<"found"<<endl;
}
auto itss = st.find(6);// find the element in set
if(itss != st.end()){//
    cout<<"found"<<endl;

}
st.erase(3);// erase the element in set
auto its = st.find(3);// find the element in set
if(its != st.end()){
    cout<<"found"<<endl;
}
int cnt = st.count(2);// count the element in set
cout<<cnt<<endl;
for(auto it = st.begin(); it != st.end(); it++){
    cout<<*it<<" "; 
}
};
int main(){
    learnSet();
}