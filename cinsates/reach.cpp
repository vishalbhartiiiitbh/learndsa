#include <iostream>
using namespace std;
class Misha{
public:
void Raj(int T){
 while (T--) {
        int N;
        cin >> N;
        int cost = (N / 2) * 30 + (N % 2) * 20;
        cout << cost << endl;
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