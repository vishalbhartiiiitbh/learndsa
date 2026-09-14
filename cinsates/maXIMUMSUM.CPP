#include <bits/stdc++.h>
using namespace std;
class Misha{
public:
void Raj(int T){
while(T--) {
int n,k;
cin>>n>>k;
vector<int>A(n);
for (int i =0;i<n;i++) {
cin >>A[i];
}
int len=n-k;
int sum=0;
for (int i=0;i<len;i++) {
sum+=A[i];
}
int ans=sum;
for(int i=len;i<n;i++) {
sum+=A[i];
sum -= A[i - len];
ans = max(ans, sum);
}
cout << ans << endl;
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