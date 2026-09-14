#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
//function for upper loop pattern
void  pattern1(int n){
        for(int i =0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            for(int j=0;j<2*i+1;j++){
                cout<<"*";      
        }
        for(int j=0;j<n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
    }
};
    int main(){
        Solution obj;
        int n;
        cin>>n;
        obj.pattern1(n);
    }