#include <bits/stdc++.h>
using namespace std;
void min_row(){
    int T;
    cin >>T;
    while (T--) {
        int N,M,X;
        cin >>N>>M >>X;
        int row = (X - 1) / M + 1;
        int fromFront = row;
        int fromBack = N - row + 1;
        cout << min(fromFront, fromBack) << '\n';
    }

}
int main() {
    min_row();
    return 0;
}