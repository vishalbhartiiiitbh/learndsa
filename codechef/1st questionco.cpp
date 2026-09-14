#include <bits/stdc++.h>
using namespace std;
class Raj{
    public:
void Misha(int T){

while (T--) {
        int N;
        cin >> N;
        vector<int> C(N);
        for (int &x : C) cin >> x;
        int ans = *max_element(C.begin(), C.end());
        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                if (C[i] <= C[j]) {
                    ans = max(ans, C[i] + C[j]);
                }
            }
        }
        cout << ans << '\n';
    }
};
};
int main() {
    int T;
    cin >> T;
Raj obj;
    obj.Misha(T);

return 0;
}
