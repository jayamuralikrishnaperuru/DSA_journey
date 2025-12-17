#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int LCM(int n1,int n2) {
        int lcm ;
        int i = 1 ;
        int n = max(n1,n2) ;
        while(1) {
            int mul = n * i ;
            if(mul % n1 == 0 && mul % n2 == 0){
                lcm = mul ;
                break ;
            }i++;
        }return lcm ;
    }
};

int main()
{
    int n1 = 4, n2 = 12;

    Solution sol; 

    int ans = sol.LCM(n1, n2);
    cout << "The LCM of" << n1 << " and " << n2 << " is: " << ans;
    
    return 0;
}