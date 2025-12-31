#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestDigit(int n) {
        int count = 0 ;
        while( n > 0) {
            int lastDigit = n % 10 ;
            count = max(count,lastDigit);
            n = n / 10 ;
        }
        return count ;
    }
};

int main()
{
    int n = 348;
    
    Solution sol; 
    int ans = sol.largestDigit(n);
    
    cout << "The largest digit in the number is: " << ans;
    
    return 0;
}
