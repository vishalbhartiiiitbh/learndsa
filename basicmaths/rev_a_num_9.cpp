#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int revnu(int n){
        int revno = 0;
        int sign =1;
        if (n<0)
        {sign = -1;
         n=-n;
        }       
        while (n>0)
        {
         int lastDigit = n%10;
        //  revno=(revno*10)+lastDigit;
         n=n/10;
           if(revno > INT_MAX / 10 ||
               (revno == INT_MAX / 10 && lastDigit > 7)) {
                return 0;
            }

            if(revno < INT_MIN / 10 ||
               (revno == INT_MIN / 10 && lastDigit < -8)) {
                return 0;
            }

            revno = revno * 10 + lastDigit;
        }
        
        return revno*sign;
    } 
};
int main(){
int n;
cin>>n;
Solution obj;
cout<<obj.revnu(n);
return 0;
};