#include <bits/stdc++.h>
using namespace std;
class Misha{
public:
void Raj(int T){
while(T--) {
int n;
cin>>n;
if(n==1){
cout<<1<<endl;
}
else if(n%3== 0){
cout<<n+1<<endl;
}
else{
cout<<n+2<<endl;
}
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