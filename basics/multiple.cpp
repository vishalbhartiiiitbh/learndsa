#include <bits/stdc++.h>
using namespace std;
void  conditioncheck(){
    int n;
    cin>>n;
    if(n%3==0) {
    cout <<0<<'\n';
        }
        else if(n%3==2) 
        {
            cout<<1<<'\n';
        }
        else 
        {
            int next5 = ((n/5)+1);

            if(next5%3==0) {
                cout <<1<<'\n';
            }
            else 
            {
                cout<<2<<'\n';
            }
        }
}
int main(){
    int t;
    cin>>t;
    for(int i= 0;i<t;i++){
        conditioncheck();
    }
}