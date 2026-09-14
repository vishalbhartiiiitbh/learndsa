#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isPalindrome(int n) {
        int w=n;
        int revno = 0;
        while (n>0)
        {
         int lastDigit = n%10;
          n=n/10;
           if(revno > INT_MAX / 10 ||
               (revno == INT_MAX / 10 && lastDigit > 7)) {
                return 0;
            }

            if(revno < INT_MIN / 10 ||
               (revno == INT_MIN / 10 && lastDigit < -8)) {
                return 0;
            }

         revno=(revno*10)+lastDigit;
         
        }
        if (revno ==w)
        {
            return true;
        }
        else
        {
            return false;
        }
        // return revno=w;
        
    } 
};
int main(){
int n;
cin>>n;
Solution obj;
cout<<boolalpha<<obj.isPalindrome(n);
return 0;
};