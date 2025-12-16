#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        int count = 1 ;
        for(int i = 1; i <= n; i++){
            count = count  * i ;
        }
        return count ;
    }
};

int main()
{
    int n = 4;
    
    Solution sol; 
    
    int ans = sol.factorial(n);
    
    cout << "The factorial of given number is: " << ans;
    
    return 0;
}
