#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void pattern(int N)
{
    for(int i =0; i<N;i++){
        for(int j=N;j>i;j--){
       cout<<N-j+1;
        }
         cout<<endl;
    }
   
}
};
int main(){
    Solution obj;
    int N;
    cin>>N;
    obj.pattern(N);
}