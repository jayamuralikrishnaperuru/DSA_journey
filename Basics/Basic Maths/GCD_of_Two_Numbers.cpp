#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd  = 1 ;
        for(int i = 1; i <= min(n1,n2); i++){
            if(n1 % i ==  0 && n2 % i == 0){
                gcd = i ;
            }
        }
        return gcd ;
    }
};

int main() {
    int n1 = 4, n2 = 6;

    Solution sol; 

    int ans = sol.GCD(n1, n2);
    
    cout << "GCD of " << n1 << " and " << n2 << " is: " << ans << endl;
    
    return 0;
}
