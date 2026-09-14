#include <bits/stdc++.h>
using namespace std;
class Misha{
public:
void Raj(int T){
while (T--) {
int n;
cin>>n;
map<int,int>freq;
int ans=0;
for(int i=0;i<n;i++) {
int x;
cin>>x;
// Find position of highest set bit
int bit =31-__builtin_clz(x);
freq[bit]++;
ans=max(ans,freq[bit]);
}
cout<<ans<<endl;
}
};
};
int main() {
int T;
cin >> T;  
Misha Vishal;
Vishal.Raj(T);
return 0;
}