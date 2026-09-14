#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void pattern(int N)
{
    for(int i =0; i<N;i++){
        for(int j=0;j<=i;j++){
       cout<<i+1;
        }
         cout<<endl;
    }
   
}
};
int main(){
    Solution obj;
    obj.pattern(5);
}