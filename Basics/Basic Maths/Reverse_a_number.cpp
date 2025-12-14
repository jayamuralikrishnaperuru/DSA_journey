#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int count = 0 ;
        while( n > 0){
             int lastDigit = n % 10 ;
             count = (count * 10) + lastDigit ;
             n = n / 10 ;
        }
        return count ;
    }
};

int main()
{
    int n = 6678;
    
    Solution sol; 
    
    int ans = sol.reverseNumber(n);
    cout << "The reverse of given number is: " << ans;
    
    return 0;
}