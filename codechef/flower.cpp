#include <bits/stdc++.h>
using namespace std;
class Vishal {
public:
void Bharti(int T) {
while (T--) {
int N;
string S;
cin>>N>>S;
int transitions=0,zeroOne=0,oneZero=0;
for(int i=1;i<N;i++) {
if(S[i]!=S[i-1]){
transitions++;
if(S[i-1]=='0')
zeroOne++;
else
oneZero++;
} }
int beauty=(N-1)-transitions;
if (zeroOne>=2||oneZero>=2){
beauty+=2;}
else if(transitions>=2)
beauty+=1;
cout<<beauty<<'\n';
} } };
int main() {
    int T;
    cin>>T;
    Vishal Misha;
    Misha.Bharti(T);
    return 0;
}


