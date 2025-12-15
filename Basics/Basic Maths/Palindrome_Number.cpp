#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        int original = n ;
        int count = 0 ;
        while( n > 0) {
            int lastDigit = n % 10 ;
            count = (count * 10) + lastDigit ;
            n = n / 10 ;
        }
        return ( original == count) ;
    }
};

int main()
{
    int n = 12321;
    Solution sol;
    bool ans = sol.isPalindrome(n);
    
    if(ans) cout << "The given number is a palindrome";
    else cout << "The given number is not a palindrome";
    
    return 0;
}