#include <bits/stdc++.h>
using namespace std;
class Misha{
public:
void Raj(int T){
while (T--) {
        int A,B,P,Q,R;
        cin>>A>>B>>P>>Q>>R;
        int ans =INT_MAX;
        for (int k=0;k<=min(A,B);k++) {
            int price=k*R+((A-k+1)/2)*P+((B-k+1)/2)*Q;
            ans = min(ans, price);
        }
        cout << ans << '\n';
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