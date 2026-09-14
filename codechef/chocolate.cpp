#include<bits/stdc++.h>
using namespace std;
void solve(){
int N,A,c=0,s=0;
cin>>N;
for(int i=0;i<N;i++){
cin>>A;
s+=A;
if(A%2!=0)c++;
}
if(s%2==0)cout<<s-c/2<<"\n";
else cout<<c/2<<"\n";
}
int main(){
int T;
cin>>T;
while(T--)solve();
return 0;
}