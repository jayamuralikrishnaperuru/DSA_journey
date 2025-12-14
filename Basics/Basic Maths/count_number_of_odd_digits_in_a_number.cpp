#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
        int count = 0 ;
        while( n > 0){
            int lastDigit = n % 10 ;
            if(lastDigit % 2 != 0){
                count += 1 ;
            }
            n = n / 10 ;
        }
        return count ;
    }
};

int main() {
    int n = 6678;
    
    Solution sol; 
    
    int ans = sol.countOddDigit(n);
    cout << "The count of odd digits in the given number is: " << ans;
    
    return 0;
}